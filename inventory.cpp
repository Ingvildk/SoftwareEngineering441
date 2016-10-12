#include "inventory.h"
#include <algorithm>
#include <iostream>

using namespace std;

int Inventory::searchProduct(string s, char c) {
	std::vector<Products>::iterator it;
	
	if (c == n) { //if the string is the name of a product
		it = std::find(products.begin(), products.end(), [&](const products & p) {
			p.getName() == s;
		});
	}
	else if (c == b) { //if the string is the brand of a product
		it = std::find(products.begin(), products.end(), [&](const products & p) {
			p.getBrand() == s;
		});
	}
	else { //if the string is the department of a product
		it = std::find(products.begin(), products.end(), [&](const products & p) {
			p.getDept() == s;
		});
	}
	
	int index = it - products.begin(); //calculate the index of the product
	
	if (index >= products.size()) //product was not found
		return -1;
	else
		return index;
}

int Inventory::searchProduct(int id) {
	std::vector<Products>::iterator it;
	
	it = std::find(products.begin(), products.end(), [&](const products & p) {
		p.getID() == id;
	});
	
	int index = it - products.begin(); //calculate the index of the product
	
	if (index >= products.size()) //product was not found
		return -1;
	else
		return index;
}

void Inventory::addProduct(int id, string name, string brand, string dept, int q, double p) {
	int index == searchProduct(id);
	
	if (index != -1) //product already exists
		return;
	else
		products.push_back(new Product(id, name, brand, dept, q, p));
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
	
	if (index == -1) {
		cout << "There are no products matching that search term." << endl;
	else {
		cout << (products.at(index)).display() << endl;
	}		
}

void Inventory::displayProducts() {
	for (std::vector<int>::iterator it = products.begin(); it != products.end(); ++it)
    	cout << it.display() << endl;
  	cout << '\n';
}
