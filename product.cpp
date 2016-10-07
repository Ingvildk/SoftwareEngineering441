#include "Product.h"

/*
*   Default Contructor -> intialising int values to ZERO
*                                   stirng Value to SPACE
*
**/

Product::Product(){
    name = brand = dept = " ";
    quantity = msrp = price = 0;
    isDamaged = false;          // assuming there is nothing damaged
}


/*
*   Destructor for clearing the memory
*
**/
Product::~Product(){

}


/*
*   Description:
*   Parameters:
*
**/
void Product::setName(string Name){
    name = Name;
}



/*
*   Description:
*   Parameters:
**/
void Product::setBrand(string Brand){
    brand = Brand;
}



/*
*   Description:
*   Parameters:
**/
void Product::setDept(string Dept){
    dept = Dept;
}



/*
*   Description:
*   Parameters:
**/
void Product::setQuantity(int q){
    quantity = q;
}



/*
*   Description:
*   Parameters:
**/
void Product::setMsrp(int m){
    msrp = m;
}



/*
*   Description:
*   Parameters:
**/
void Product::setPrice(int p){
    price = p;
}



/*
*   Description:
*   Parameters:
**/
void Product::setDamage(bool b){
    isDamaged = b;
}



/*
*   Description:
*   Parameters:
**/
bool Product::getDamage() {
    return isDamaged;
}



/*
*   Description:
*   Parameters:
**/
string Product::getName() {
    return name;
}



/*
*   Description:
*   Parameters:
**/
string Product::getBrand() {
    return brand;
}



/*
*   Description:
*   Parameters:
**/
string Product::getDept() {
    return dept;
}



/*
*   Description:
*   Parameters:
**/
int Product::getQuantity() {
    return quantity;
}



/*
*   Description:
*   Parameters:
**/
int Product::getMsrp() {
    return msrp;
}



/*
*   Description:
*   Parameters:
**/
int Product::getPrice() {
    return price;
}



/*
*   Description:
*   Parameters:
**/
void Product::display(){
    cout << " Name /t/t" << "Barnd\t\t" << "Department \t\t" << "Quantity\t\t" <<  "MSRP\t\t" << "price\t\t" << "\n" << endl;
    cout << name << "\t\t" << brand << "\t\t" << dept << "\t\t" << quantity << "\t\t" << msrp << "\t\t" << price << endl;
}
