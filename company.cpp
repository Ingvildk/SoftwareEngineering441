#include "company.h"
#include "store.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

Company::Company(string Name, string Address, int Id) {
	name = Name;
	address = Address;
	ID = Id;
}

void Company::addStore(const char Name, const char Address, int Id) {
		name = Name;
		address = Address;
		ID = Id;
	}

void Comapany::addStore(string Name, string Address, int Id) {
	name = Name;
	address = Address;
	id = Id;
}
void Company::removeStore(string storeName) {
	if ( std::find(vector.begin(), vector.end(), StoreName) != vector.end() )
	   // DELETE THIS STORE
	else
	   cout << "The Store does not exists for this company" << endl;
}
void Company::changeStore(string, string, int);
void Company::displayStore(string);
void Company::displayStores();
void Company::addEmployee(string, string, string, double, int);
void Company::removeEmployee(string, string);
void Company::changeEmployee(string, string, double);
void Company::displayEmployee(string, string);
void Company::displayEmployees();
void Company::setName(string);
void Company::setAddress(cstring);	
