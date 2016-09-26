#ifndef _INVENTORY_H
#define _INVENTORY_H

#include "product.h"
#include <vector>

class Inventory {
    private:
        std::vector<Product*> products;     //list of products
        void searchProduct(const char*, char);
    public:
        Inventory();
        ~Inventory();
        void addProduct (const char*, const char*, int, int);
        void removeProduct (const char*, char);
        void displayProduct(const char*, char);
        void displayProducts();
        void applySale (const char*, int);
};

#endif
