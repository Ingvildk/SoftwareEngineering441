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
	Store temp = ("moch", "moch", 0);
	store.push_back(temp);
}

void Company::addStore(string Name, string Address, int Id) {
		Store temp = new Store(Name, Address, Id);
		store.push_back(temp);;
	}

int cSearchStore(string Name) {
	int len = stores.size();
	for (int i = 0; i < len; i++) {
		if (stores[len].getName() == Name) {
			return i;
		}
	}
	return -1;
}	

void Company::removeStore(string storeName) {
	if ( cSearchStore(storeName) != -1 ) { // return index 
		int index = cSearchStore(storeName);
		stores.erase(stores.begin() + index);
	} 
	else {
	   cout << "The Store does not exists for this company" << endl; 
	}
}

void Company::changeStore(string Name, string Address, int ID) {
	int index = cSearchStore(Name);
	// if stores exist in vector
	if ( index != -1) {
		stores[index].setName(Name);
		stores[index].setAddress(Address);
		stores[index].setId(ID);
	}
	// not found in this companys stores vector
	else {
		cout << "The store do not exist" << endl;
	}
}

void Company::displayCompany() {
	cout << name << address << ID << endl;
}

void Company::displayStore(string storeName) {
	int num = cSearchStore(storeName);
	// if num exist in stores vector
	if ( num != -1) {
		string Name = stores[num].getName();
		string Address = stores[num].getAddress();
		string ID = stores[num].getId();
		cout << Name << endl;
		cout << Address << endl;
		cout << ID << endl;				
	}else {
		cout << "Could not find store" << endl;
	}
}
void Company::addEmployee(string, string, string, double, int) {
	Employee temp = new Employee(string, string, string, double, int);
	employees.push_back(temp);
}
void Company::removeEmployee(string, string);
void Company::changeEmployee(string, string, double);
void Company::displayEmployee(string, string);
void Company::displayEmployees();
void Company::setName(string);
void Company::setAddress(string);	
