#ifndef _TRANSACTION_H
#define _TRANSACTION_H

#include "product.h"
#include <vector>
#include <iostream>

class Transaction {
    private:
		Product item;
<<<<<<< HEAD
		std::vector<Product> shoppingCart;
=======
		static vector <Product> shoppingCart;
>>>>>>> origin/master
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
