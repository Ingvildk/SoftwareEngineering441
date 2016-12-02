#include "inventory.h"
#include <iostream>
#include <fstream>

Inventory::Inventory(int store) {
    storeID = store;
    std::string line;
    std::string s = std::to_string(storeID);
    std::ifstream myfile(s + "Inventory.txt");
    int id;
    std::string name;
    std::string brand;
    std::string dept;
    int q;
    double m;
    double p;

    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            if (line == "")
                break;
            else {
                id = stoi(line);
                getline(myfile, name);
                getline(myfile, brand);
                getline(myfile, dept);
                getline(myfile, line);
                q = stoi(line);
                getline(myfile, line);
                m = stod(line);
                getline(myfile, line);
                p = stod(line);
                products.push_back(Product(id, name, brand, dept, q, m, p));
            }
        }
        myfile.close();
    }
}

//void Inventory::ChangeTotal(int total){
//    Notify(total);
//}

int Inventory::searchProduct(std::string s) {
    for (int i = 0; (unsigned)i < products.size(); i++) {
        if ((products.at(i)).getName() == s)
            return i;
        if ((products.at(i)).getBrand() == s)
            return i;
        if ((products.at(i)).getDept() == s)
            return i;
    }

    return -1;
}

int Inventory::searchProduct(int id) {
    for (int i = 0; (unsigned)i < products.size(); i++) {
        if ((products.at(i)).getID() == id)
            return i;
    }

    return -1;
}

void Inventory::writeToFile() {
    std::string s = std::to_string(storeID);
    std::string filenameOld = s + "Inventory.txt";
    std::string filenameNew = s + "InventoryNEW.txt";
    std::ofstream myfile(filenameNew);

    for (int i = 0; (unsigned)i < products.size(); i++) {
        myfile << (products.at(i)).getID() << "\n";
        myfile << (products.at(i)).getName() << "\n";
        myfile << (products.at(i)).getBrand() << "\n";
        myfile << (products.at(i)).getDept() << "\n";
        myfile << (products.at(i)).getQuantity() << "\n";
        myfile << (products.at(i)).getMsrp() << "\n";
        myfile << (products.at(i)).getPrice() << "\n";
    }
    myfile.close();

    if (myfile) {
        remove(filenameOld.c_str());
        rename(filenameNew.c_str(), filenameOld.c_str());
    }
}

void Inventory::addProduct(int id, std::string name, std::string brand, std::string dept, int q, double m, double p) {
    int index = searchProduct(id);

    if (index != -1)
        return;
    else {
        Product product = Product(id, name, brand, dept, q, m, p);
        products.push_back(product);
        writeToFile();
    }
}

void Inventory::removeProduct(int id) {
    int index = searchProduct(id);

    if (index == -1)
        return;
    else {
        products.erase(products.begin() + index);
        writeToFile();
    }
}

void Inventory::displayProduct(int id) {
    int index = searchProduct(id);

    if (index == -1)
        std::cout << "There are no products matching that search term." << std::endl;
    else
        (products.at(index)).display();
}

void Inventory::displayProducts() {
    for (int i = 0; (unsigned)i < products.size(); i++)
        (products.at(i)).display();
    std::cout << '\n';
}

void Inventory::addQuantity(int id, int quantity) {
    int index = searchProduct(id);

    if (index == -1)
        return;
    else {
        products.at(index).setQuantity(products.at(index).getQuantity() + quantity);
        writeToFile();
    }
}

void Inventory::removeQuantity(int id, int quantity) {
    int index = searchProduct(id);

    if (index == -1 || ((products.at(index)).getQuantity() - quantity < 0))
        return;
    else {
        products.at(index).setQuantity(products.at(index).getQuantity() - quantity);
        writeToFile();
    }
}

Product Inventory::getProduct(int id) {
    int index = searchProduct(id);

    if (index == -1) {
        Product p;
        p.setID(-1);
        return p;
    }
    else
        return products.at(index);
}

std::string Inventory::getProductInfoAsString(int id){
    int index = searchProduct(id);
    if (index == -1)
        return "There are no products matching that search term.";
    else{
        std::string tempstr;
        tempstr = (products.at(index).getInfoAsString());
        return tempstr;
    }
}

int Inventory::sizeOfInventory(){
    return (products.size());
}

void Inventory::getAllProductsInfoAsString(std::string* buff, int n){
    for(int i = 0; i < n; i++){
        buff[(i*7)] = std::to_string((products.at(i)).getID());
        buff[(i*7)+1] = (products.at(i)).getName();
        buff[(i*7)+2] = (products.at(i)).getBrand();
        buff[(i*7)+3] = (products.at(i)).getDept();
        buff[(i*7)+4] = std::to_string((products.at(i)).getQuantity());
        buff[(i*7)+5] = std::to_string((products.at(i)).getMsrp());
        buff[(i*7)+6] = std::to_string((products.at(i)).getPrice());
    }
}
