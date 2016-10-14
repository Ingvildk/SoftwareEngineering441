#include "company.h"
#include "store.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

Company::Company(string Name, string Address, int Id) {
	name = Name;
	address = Address;
	ID = Id;
// PUSH TWO MOCH DATA OBJECT STORE AND EMPLOYEE to vectors SEE IF HELPS
//	addStore("moch", "moch", 0, 0);
//	addEmployee("moch", "moch", "moch", 0, 0);
}

void Company::addStore(string Name, string Address, int Id, double Stax) {
		stores.push_back(Store(Name, Address, Id, Stax));
	}

int Company::cSearchEmployee(string Emp) {
	int test = stores.size();
	int len = employees.size();
	for (int i = 0; i < len; i++) {
		if (employees[len].getName() == Emp) {
			return i;
		}
	}
	return -1;
}

int Company::cSearchStore(string Name) {
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

void Company::removeEmployee(string Name) {
	int index = cSearchEmployee(Name);
	// if you found index
	if ( index != -1)	{
		employees.erase(employees.begin() + index);
	} else {
		cout << "The employee can not be found" << endl;
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
	cout << name << " " << address << " " << ID << " " << endl;
}

void Company::displayStore(string storeName) {
	int num = cSearchStore(storeName);
	// if num exist in stores vector
	if ( num != -1) {
		string Name = stores[num].getName();
		string Address = stores[num].getAddress();
		int ID = stores[num].getId();
		cout << Name << endl;
		cout << Address << endl;
		cout << ID << endl;				
	}else {
		cout << "Could not find store" << endl;
	}
}
void Company::addEmployee(string name, string address, string age, double salary, int id) {
	employees.push_back(Employee(name, address, age, salary, id));
}

void Company::changeEmployee(string Name, string Job, string Address, double Hours) {
	int index = cSearchEmployee(Name);
	employees[index].setName(Name);
	employees[index].setJob(Job);
	employees[index].setAddress(Address);
	employees[index].setHours(Hours);
}

void Company::displayEmployee(string Name) {
	int num = cSearchEmployee(Name);
	// if you can find the employee
	if ( num!= -1) {
		string Ename = employees[num].getName();
		string Eaddress = employees[num].getAddress();
		int Eid = employees[num].getID();
		double Etax =  employees[num].getSalesTax();
		cout << Ename << endl;
		cout << Eaddress << endl;
		cout << Eid << endl;	
		cout <<	Etax << endl;
	} else {
		cout << "The employee could not be found" << endl;
	}
}
void Company::displayEmployees() {
	int len = employees.size();
	// if the employees vector is zero
	if ( len == 0) {
		cout << "No elements in vector employees" << endl;
	} else {
		// loop through employees vector and dispay each element
		for (int i = 0; i < len; i++) {
			string na = employees[i].getName();
			displayEmployee(na);
		}
	}
}
void Company::setName(string Name) {
	name = Name;
}
void Company::setAddress(string Address) {
	address = Address;
}	

void Company::setId(int id) {
	ID = id;
}

int Company::getId() {
	return ID;
}
