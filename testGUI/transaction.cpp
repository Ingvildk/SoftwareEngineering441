#include "transaction.h"
#include <fstream>
#include <string>

Transaction::Transaction(double salesTax) {
    tax = salesTax;
    totalTax = 0;
    sum = 0;
    std::string line;

    std::ifstream myfile("Transaction.txt");
    if (myfile.is_open()) {
        getline(myfile, line);
        if (line != "")
            receipt = stoi(line);
    }
    myfile.close();
}

int Transaction::searchProduct(int id) {
    for (int i = 0; (unsigned)i < shoppingCart.size(); i++) {
        if ((shoppingCart.at(i)).getID() == id)
            return i;
    }

    return -1;
}

void Transaction::addToCart(Product p) {
    int index = searchProduct(p.getID());

    if (index != -1) {
        int q1 = shoppingCart.at(index).getQuantity();
        int q2 = p.getQuantity();
        shoppingCart.at(index).setQuantity(q1 + q2);
        int price1 = p.getPrice() * p.getQuantity();
        int price2 = shoppingCart.at(index).getPrice();
        shoppingCart.at(index).setPrice(price1 + price2);
        sum = sum + price1 + price2;
        totalTax = sum * tax;
    }
    else {
        p.setPrice(p.getPrice() * p.getQuantity());
        shoppingCart.push_back(p);
        sum += p.getPrice();
        totalTax = sum * tax;
    }
}

void Transaction::removeFromCart(Product p) {
    int index = searchProduct(p.getID());

    if (index == -1)
        return;
    else if (shoppingCart.at(index).getQuantity() - p.getQuantity() <= 0)
        shoppingCart.erase(shoppingCart.begin() + index);
    else {
        int q1 = shoppingCart.at(index).getQuantity();
        int q2 = p.getQuantity();
        shoppingCart.at(index).setQuantity(q1 - q2);
        int price1 = p.getPrice() * p.getQuantity();
        int price2 = shoppingCart.at(index).getPrice();
        shoppingCart.at(index).setPrice(price2 - price1);
        sum = sum - price1;
        totalTax = sum * tax;
    }
}

void Transaction::clearCart() {
    sum = 0;
    totalTax = 0;
    shoppingCart.clear();
}

void Transaction::checkout() {
    std::string s = std::to_string(receipt);

    std::ofstream myfile(s + "Receipt.txt");

    myfile << "Department\t" << "Name\t" << "ID\t" << "Price\t" << "Quantity\n\n";

    for (int i = 0; (unsigned)i < shoppingCart.size(); i++) {
        myfile << (shoppingCart.at(i)).getDept() << "\t\t";
        myfile << (shoppingCart.at(i)).getName() << "\t";
        myfile << (shoppingCart.at(i)).getID() << "\t";
        myfile << (shoppingCart.at(i)).getPrice() << "\t\t";
        myfile << (shoppingCart.at(i)).getQuantity() << "\n";
    }

    myfile << "\nSubtotal: " << sum << "\n";
    myfile << "Tax: " << totalTax << "\n";
    myfile << "Total: " << sum + totalTax;
    myfile.close();

    receipt += 1;
}
