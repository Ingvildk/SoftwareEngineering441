#ifndef _INVENTORY_H
#define _INVENTORY_H

#include "product.h"
#include <vector>

class Inventory {
    private:
        std::vector<Product> products;     //list of products
        int searchProduct(string, char);
    public:
        void addProduct (string, string, int, int);
        void removeProduct (string, char);
        void displayProduct(string, char);
        void displayProducts();
        void applySale (string, int);
};

#endif
