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

void Inventory::addProduct() {}

void Inventory::removeProduct(string s, char c) {
	int index = searchProduct(s, c);
	
	if (index == -1)
		return;
	else
		products.erase (products.begin() + index);
}

void Inventory::displayProduct(string s, char c) {
	int index = searchProduct(s, c);
	
	if (index == -1) {
		cout << "There are no products matching that search term." << endl;
	else {
		cout << "Name: " << (products.at(i)).display() << endl;
	}		
}

void Inventory::displayProducts() {
	for (std::vector<int>::iterator it = products.begin(); it != products.end(); ++it)
    	cout << it.display() << endl;
  	cout << '\n';
}
