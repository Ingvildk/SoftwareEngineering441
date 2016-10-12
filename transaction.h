#ifndef _TRANSACTION_H
#define _TRANSACTION_H

#include "product.h"
#include "inventory.h"
#include <vector>
#include <iostream>
class Transaction : public Store {
    private:
		Product *item;
		std::vector<int> items;
		std::vector<float> values;
		Inventory *inv;
        std::vector<Product*> products;
        void searchProduct(const char*, char);
    public:
        Transaction();
        ~Transaction();
		void newReturn(items);
		void newSale(items);
		int getItemNumber(int);//to be replaced by an outside function(think scanner)
		int getItemPrice(*item);
		double getSalesTax();
		int calcTotal();
		int updateQuantity(*inv, *item, int);
		float updateStatistics(float);
};
#endif