#ifndef _INVENTORY_H
#define _INVENTORY_H
#include "product.h"
#include <vector>
#include <string>

class Inventory {
    private:
        std::vector<Product> products;     //list of products
        int storeID;
        int searchProduct(string);
        int searchProduct (int);
    public:
        Inventory(int);
        void addProduct (int, string, string, string, int, double, double);
        void removeProduct (int);
        void displayProduct(int);
        void displayProducts();
        void applySale (int);
        Product getProduct(int);
};

#endif
