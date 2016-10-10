#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <string>

using namespace std;


class Product {
private:
    	int ID;            // product ID
	string name;     //name of the product
	string brand;    //brand of the product
	string dept;     //department the product is in
	int quantity;   //quantity of the product
	double msrp;       //retail price of the product
	double price;      //price of product (msrp - discount)
	bool isDamaged; //true if product is damaged
public:
	Product();
	~Product();
	void setID(int id);
	void setName(string Name);
	void setBrand(string Brand);
	void setDept(string Dept);
	void setQuantity(int q);
	void setMsrp(double m);
	void setPrice(double p);
	void setDamage(bool b);
	int getID();
	bool getDamage();
	string getName();
	string getBrand();
	string getDept();
	int getQuantity();
	double getMsrp();
	double getPrice();
	void display();
};

#endif
