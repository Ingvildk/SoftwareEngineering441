#include "inventory.h"
#include <iostream>
#include <fstream>

using namespace std;

Inventory::Inventory() {
	storeID = 0;	
}

Inventory::Inventory(int store) {
	storeID = store;	
	string line;
	string s = to_string(storeID);
	ifstream myfile(s + "Inventory.txt");
	int id;
	string name;
	string brand;
	string dept;
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

int Inventory::searchProduct(string s) {
	for (int i = 0; i < products.size(); i++) {
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
	for (int i = 0; i < products.size(); i++) {
		if ((products.at(i)).getID() == id)
			return i;
	}
	
	return -1;
}

void Inventory::addToFile(Product p) {
	ofstream myfile;
	string s = to_string(storeID);
	myfile.open(s + "Inventory.txt", std::ios::app);
	
	myfile << p.getID() << "\n" << p.getName() << "\n";
	myfile << p.getBrand() << "\n" << p.getDept() << "\n";
	myfile << p.getQuantity() << "\n" << p.getMsrp() << "\n" << p.getPrice() << "\n";
}

void Inventory::removeFromFile() {
	string s = to_string(storeID);
	string filenameOld = s + "Inventory.txt";
	string filenameNew = s + "InventoryNEW.txt";
	ofstream myfile(filenameNew);
		
	for (int i = 0; i < products.size(); i++) {
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

void Inventory::addProduct(int id, string name, string brand, string dept, int q, double m, double p) {
	int index = searchProduct(id);
	
	if (index != -1)
		return;
	else {
		Product product = Product(id, name, brand, dept, q, m, p);
		products.push_back(product);
		addToFile(product);
	}
}

void Inventory::removeProduct(int id) {
	int index = searchProduct(id);
	
	if (index == -1)
		return;
	else {
		products.erase(products.begin() + index);		
		removeFromFile();
	}
}
/*
void Inventory::displayProduct(int id) {
	int index = searchProduct(id);
	
	if (index == -1)
		cout << "There are no products matching that search term." << endl;
	else
		(products.at(index)).display();
}
*/
void Inventory::displayProducts() {
	for (int i = 0; i < products.size(); i++)
    	(products.at(i)).display();
  	cout << '\n';
}

void Inventory::addQuantity(int id, int quantity) {
	int index = searchProduct(id);
	
	if (index == -1)
		return;
	else {
		products.at(index).setQuantity(products.at(index).getQuantity() + quantity);
		removeFromFile();
	}		
}

void Inventory::removeQuantity(int id, int quantity) {
	int index = searchProduct(id);
	
	if (index == -1 || ((products.at(index)).getQuantity() - quantity < 0))
		return;
	else {
		products.at(index).setQuantity(products.at(index).getQuantity() - quantity);
		removeFromFile();
	}		
}

Product Inventory::getProduct(int id) {
	int index = searchProduct(id);
	
	if (index == -1){
		cout << "There are no products matching that search term." << endl;
		return products.at(0); //need a return here even though its the wrong product
	}else
		return products.at(index);
}
/*
void Inventory::removeQuantity(int id, int quantity) {
	int index = searchProduct(id);
	
	if (index == -1 || ((products.at(index)).getQuantity() - quantity < 0))
		return;
	else {
		products.at(index).setQuantity(products.at(index).getQuantity() - quantity);
		removeFromFile();
	}		
}

Product Inventory::getProduct(int id) {
	int index = searchProduct(id);
	
	if (index == -1){
		cout << "There are no products matching that search term." << endl;
		return products.at(0); //need a return here even though its the wrong product
	}else
		return products.at(index);
}
*/