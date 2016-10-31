Transaction::Transaction() {

}

Transaction::~Transaction() {

}

void Transaction::newReturn(items) {

}

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

int Transaction::getItemNumber() {//to be replaced by an outside function(think scanner)
	int temp;
	cout >> "Enter item number: ";
	cin << temp;
	return temp;
}

int Transaction::getItemPrice(int itemnum) {

}

int Transaction::calcTotal() {

}

int Transaction::updateQuantity(inv, item, qty) {

}

float Transaction::updateStatistics(float) {

}