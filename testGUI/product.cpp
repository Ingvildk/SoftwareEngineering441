#include <iostream>
#include <sstream>
#include "product.h"
//using namespace std;

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

Product::Product(int id, std::string Name, std::string Brand, std::string Dept, int q, double m, double p){
    ID = id;
    name = Name;
    brand = Brand;
    dept = Dept;
    quantity = q;
    msrp = m;
    price = p;
}


//Product::~Product() {

//}



void Product::setID(int id) {ID = id;}



void Product::setName(std::string Name) {name = Name;}



void Product::setBrand(std::string Brand) {brand = Brand;}


void Product::setDept(std::string Dept) {dept = Dept;}



void Product::setQuantity(int q) {quantity = q;}



void Product::setMsrp(double m) {msrp = m;}



void Product::setPrice(double p) {price = p;}



void Product::setDamage(bool b) {isDamaged = b;}


int Product::getID() {return ID;}



bool Product::getDamage() {return isDamaged;}



std::string Product::getName() {return name;}



std::string Product::getBrand() {return brand;}



std::string Product::getDept() {return dept;}



int Product::getQuantity() {return quantity;}



double Product::getMsrp() {return msrp;}



double Product::getPrice() {return price;}



void Product::display() {
    std::cout << "-------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Product ID\t" << " Name \t\t" << "Barnd\t\t" << "Department \t" << "Quantity\t" << "MSRP\t" << "price\t" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << ID << "\t\t" << name << "\t" << brand << "\t" << dept << "\t\t" << quantity << "\t\t$" << msrp << "\t$" << price << std::endl;
}

std::string Product::getInfoAsString(){
    std::string tempstr;
    std::ostringstream convertID;
    std::ostringstream convertQuantity;
    std::ostringstream convertMSRP;
    std::ostringstream convertPrice;
    convertID << ID;
    tempstr = convertID.str() + "\t" + name + "\t" + brand + "\t" + dept + "\t";
    convertQuantity << quantity;
    tempstr = tempstr + convertQuantity.str() + "\t";
    convertMSRP << msrp;
    tempstr = tempstr + convertMSRP.str() + "\t";
    convertPrice << price;
    tempstr = tempstr + convertPrice.str();
    return tempstr;
}
