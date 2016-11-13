#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <string>

class Product {
private:
    int ID;            // product ID
    std::string name;     //name of the product
    std::string brand;    //brand of the product
    std::string dept;     //department the product is in
    int quantity;   //quantity of the product
    double msrp;       //retail price of the product
    double price;      //price of product (msrp - discount)
    bool isDamaged; //true if product is damaged
public:
    Product();
    Product(int id, std::string Name, std::string Brand, std::string Dept, int q, double m, double p);
    void setID(int id);
    void setName(std::string Name);
    void setBrand(std::string Brand);
    void setDept(std::string Dept);
    void setQuantity(int q);
    void setMsrp(double m);
    void setPrice(double p);
    void setDamage(bool b);
    int getID();
    bool getDamage();
    std::string getName();
    std::string getBrand();
    std::string getDept();
    int getQuantity();
    double getMsrp();
    double getPrice();
    void display();
    std::string getInfoAsString();
};

#endif
