#include "store.h"
#include "store.h"
#include <iostream>
using namespace std;

int main() {
	cout << "--------Testing Employee --------" << endl;
	Employee emp(1, "DonaldTrump", "WhiteHouse", "President", 100, 19450309);
	emp.display();
	Store store;
	store.readEmpFile();
	//store.displayEmployees();
	return 0;
}