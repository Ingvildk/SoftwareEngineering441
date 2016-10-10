
#include <iostream>
#include "Product.h"

using namespace std;

/*
*   Default Contructor -> intialising int values to ZERO
*                                   stirng Value to SPACE
*
**/

Product::Product() {
	name = brand = dept = " ";
	ID = quantity = msrp = price = 0;
	isDamaged = false;          // assuming there is nothing damaged
}


Product::~Product() {

}



void Product::setID(int id) {ID = id;}



void Product::setName(string Name) {name = Name;}



void Product::setBrand(string Brand) {brand = Brand;}


void Product::setDept(string Dept) {dept = Dept;}



void Product::setQuantity(int q) {quantity = q;}



void Product::setMsrp(double m) {msrp = m;}



void Product::setPrice(double p) {price = p;}



void Product::setDamage(bool b) {isDamaged = b;}


int Product::getID() {return ID;}



bool Product::getDamage() {return isDamaged;}



string Product::getName() {return name;}



string Product::getBrand() {return brand;}



string Product::getDept() {return dept;}



int Product::getQuantity() {return quantity;}



double Product::getMsrp() {return msrp;}



double Product::getPrice() {return price;}



void Product::display() {
    cout << "-------------------------------------------------------------------------------------------------------" << endl;
	cout << "Product ID\t" << " Name \t\t" << "Barnd\t\t" << "Department \t" << "Quantity\t" << "MSRP\t" << "price\t" << endl;
	cout << "-------------------------------------------------------------------------------------------------------" << endl;
	cout << ID << "\t\t" << name << "\t" << brand << "\t" << dept << "\t\t" << quantity << "\t\t$" << msrp << "\t$" << price << endl;

}
