# SoftwareEngineering441
Project for cs441-Software Engineering

shoppingCart error when trying to compile.
Undefined symbols for architecture x86_64:
  "Transaction::shoppingCart", referenced from:
      Transaction::Transaction(double) in transaction-5c9a6b.o
      Transaction::searchProduct(int) in transaction-5c9a6b.o
      Transaction::addToCart(Product) in transaction-5c9a6b.o
      Transaction::removeFromCart(Product) in transaction-5c9a6b.o
      Transaction::clearCart() in transaction-5c9a6b.o
      Transaction::checkout() in transaction-5c9a6b.o
  "Company::stores", referenced from:

  I am compiling like this:

  g++ employee.cpp product.cpp inventory.cpp store.cpp company.cpp transaction.cpp test.cpp
