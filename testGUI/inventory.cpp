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
    else{
        std::ofstream myfile(s + "Inventory.txt");
        myfile.close();
    }
}

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

void Inventory::addProduct(int id, std::string name, std::string brand, std::string dept, int q, double m, double p) {
    int index = searchProduct(id);

    if (index != -1)
        return;
    else {
        products.push_back(Product(id, name, brand, dept, q, m, p));

        std::string s = std::to_string(storeID);
        std::ofstream myfile;
        s.append("Inventory.txt");
        myfile.open(s, std::ios::app);
        myfile << id << "\n" << name << "\n";
        myfile << brand << "\n" << dept << "\n";
        myfile << q << "\n" << m << "\n" << p << "\n";
        myfile.close();
    }
}

void Inventory::removeProduct(int id) {
    int index = searchProduct(id);

    if (index == -1)
        return;
    else {
        products.erase(products.begin() + index);

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

Product Inventory::getProduct(int id) {
    int index = searchProduct(id);

    if (index == -1)
        std::cout << "There are no products matching that search term." << std::endl;
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
