#ifndef _INVENTORY_H
#define _INVENTORY_H
#include "product.h"
#include <vector>
#include <string>

class Inventory {
    private:
        std::vector<Product> products;     //list of products
        int storeID;
        int searchProduct(std::string);
        int searchProduct (int);
    public:
        Inventory();
        Inventory(int);
        void addProduct (int, std::string, std::string, std::string, int, double, double);
        void removeProduct (int);
        void displayProduct(int);
        void displayProducts();
        void applySale (int);
        Product getProduct(int);
        std::string getProductInfoAsString(int);
};

#endif
