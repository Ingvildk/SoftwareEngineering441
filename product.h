#ifndef _PRODUCT_H
#define _PRODUCT_H
using namespace std;
class Product {
    private:
        char *name;     //name of the product
        char *brand;    //brand of the product
        char *dept;     //department the product is in
        int quantity;   //quantity of the product
        int msrp;       //retail price of the product
        int price;      //price of product (msrp - discount)
        int discount;   //discount of the product
        bool isDamaged; //true if product is damaged
    public:
        Product(const char*, const char*, const char*, int, int);
        ~Product();
        char *getName() { return name; }
        char *getBrand() { return brand; }
        char *getDept() { return dept; }
        int getQuantity() { return quantity; }
        int getMsrp() { return msrp; }
        int getPrice() { return price; }
        int getDiscount() { return discount; }
        bool getDamage() { return isDamaged; }
        void setQuantity(int q) { quantity = q; }
        void setMsrp(int m) { msrp = m; }
        void setDiscount(int d) { discount = d; }
        void setDamage(bool b) { isDamaged = b; }
        void display();
};

#endif
