#ifndef _TRANSACTION_H
#define _TRANSACTION_H

#include "product.h"
#include <vector>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QString>

class Transaction {
    private:
        Product item;
        std::vector<Product> shoppingCart;
        double tax;
        double totalTax;
        double sum;
        int receipt;
        int searchProduct (int);
    public:
        Transaction(double);
        void addToCart(Product);//add product to shopping cart vector
        void removeFromCart(Product p);//remove product from shopping cart vector
        void clearCart();//delete shopping cart contents
        void checkout();//sale is complete
        double getSalesTax();
};
#endif
