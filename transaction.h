#ifndef _TRANSACTION_H
#define _TRANSACTION_H

#include "product.h"
#include "inventory.h"
#include <vector>
#include <iostream>
class Transaction : public Store {
    private:
		Product *item;
		//std::vector<int> items;
		std::vector<int> shoppingCart;
		//std::vector<float> values;
		Inventory *inv;
        std::vector<Product*> products;
        //void searchProduct(const char*, char);
    public:
        Transaction();
        ~Transaction();
		void newReturn(items);
		//void newSale(items);
		void addToCart(int);//add product to shopping cart vector
		void removeFromCart(int);//remove product from shopping cart vector
		void clearCart();//delete shopping cart contents
		void checkout();//sale is complete
		void displayCart();
		int getItemNumber(int);//to be replaced by an outside function(think scanner)
		int getItemPrice(*item);
		double getSalesTax();
		double calcTotal();
		int updateQuantity();
		double updateStatistics(double);
};
#endif