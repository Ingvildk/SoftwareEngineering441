Transaction::Transaction() {

}

Transaction::~Transaction() {
	
}

void Transaction::newReturn(items) {
	//add item(s) to inv
}
/*
void Transaction::newSale(items) {
	double sum = 0;
	double total;
	double tax = getSalesTax();
	for (int i = 0; i < items.length(); i++) {
		sum += getItemPrice(i);
	}
	tax = (tax)* sum;
	total = tax + sum;
	cout << "Sum: " << sum << endl; //replace by outside function
	cout << "Tax: " << tax << endl; //replace by outside display function
	cout << "Total: " << total << endl; //replace by outside function
}
*/
/*
void addToCart(int);//add product to shopping cart vector
void removeFromCart(int);//remove product from shopping cart vector
void clearCart();//delete shopping cart contents
void checkout();//sale is complete
*/
void Transaction::addToCart(int ID){
	shoppingCart.push_back(ID);
}

void Transaction::removeFromCart(int ID){
	for(int i = 0; i < shoppingCart.length(); i++){
		if(ID == shoppingCart[i]){
			shoppingCart.erase(i);
		}else
			cerr << "ERROR: item is not in Cart" << endl;
	}
}

void Transaction::clearCart(){
	shoppingCart.clear();
}

void Transaction::checkout(){
	// No payment handled yet, but that would also be called from this function
	// 1. Calculate Total
	cout << "Amount Due: " << calcTotal() << endl;// <- works off of shopping cart
	// 2. Update Inv
	updateQuantity();
	// 3. Update Sales Statistics
	updateStatistics(calcTotal());
	//Last step in check out process so we will have it clear the cart
	clearCart();
}

void Transaction::displayCart(){
	for(int i = 0; i < shoppingCart.length();i++){
		//inv->getProduct(shoppingCart[i]).getName()
		//i forget how to work with pointer pointing to classes ,but this is how it will work
	}
}

int Transaction::getItemNumber() {//to be replaced by an outside function(think scanner)
	int temp;
	cout >> "Enter item number: ";
	cin << temp;
	return temp;
}

int Transaction::getItemPrice(int itemnum) {//item price needs to be a double? especially if sales tax is applied
	//item id is passed to this function. Need to access inventory and return price of product
	
}

//Sums up shopping cart by going through cart and repeatedly calling getItemPrice
double Transaction::calcTotal() {

}

int Transaction::updateQuantity() { // goes through shopping cart to get information

}

//for now we will just keep track of total sales
double Transaction::updateStatistics(double) { 
	
	
}