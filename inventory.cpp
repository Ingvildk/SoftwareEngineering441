#include "inventory.h"
#include <algorithm>
#include <iostream>

using namespace std;

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

void Inventory::addProduct(int id, string name, string brand, string dept, int q, double m, double p) {
	int index = searchProduct(id);
	
	if (index != -1) //product already exists
		return;
	else
		products.push_back(Product(id, name, brand, dept, q, m, p));
}

void Inventory::removeProduct(int id) {
	int index = searchProduct(id);
	
	if (index == -1)
		return;
	else
		products.erase(products.begin() + index);
}

void Inventory::displayProduct(int id) {
	int index = searchProduct(id);
	
	if (index == -1)
		cout << "There are no products matching that search term." << endl;
	else
		(products.at(index)).display();
}

void Inventory::displayProducts() {
	for (int i = 0; i < products.size(); i++)
    	(products.at(i)).display();
  	cout << '\n';
}
