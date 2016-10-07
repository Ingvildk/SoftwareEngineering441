#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <string.h>

class Product {
    private:
        std::string name;     //name of the product
        string brand;    //brand of the product
        string dept;     //department the product is in
        int quantity;   //quantity of the product
        int msrp;       //retail price of the product
        int price;      //price of product (msrp - discount)
        bool isDamaged; //true if product is damaged
    public:
        Product();
        ~Product();
        void setName(string Name);
        void setBrand(string Brand);
        void setDept(string Dept);
        void setQuantity(int q);
        void setMsrp(int m);
        void setPrice(int p);
        void setDamage(bool b);
        bool getDamage();
        string getName();
        string getBrand();
        string getDept();
        int getQuantity();
        int getMsrp();
        int getPrice();
        int getDiscount();
        void display();
};

#endif
