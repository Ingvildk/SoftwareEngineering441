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

void Company::addStore(string Name, string Address, int Id) {
		Store temp = new Store(Name, Address, Id);
		stores.push_back(temp);;
	}

int cSearchEmployee(string Emp) {
	int len = employees.size();
	for (int i = 0; i < len; i++) {
		if (employees[len].getName() == Emp) {
			return i;
		}
	}
	return -1;
}

int cSearchStore(string Name) {
	int len = stores.size;
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
		cout << << "The employee can not be found" << endl;
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
		string ID = stores[num].getId();
		cout << Name << endl;
		cout << Address << endl;
		cout << ID << endl;				
	}else {
		cout << "Could not find store" << endl;
	}
}
void Company::addEmployee(string name, string address, string age, double salary, int) {
	Employee temp = new Employee(string, string, string, double, int);
	employees.push_back(temp);
}

void Company::changeEmployee(int ID, string job, string address, double Hours) {
	int index = cSearchEmployee(ID);
}
void Company::displayEmployee(string Name) {
	int num = cSearchEmployee(Name);
	// if you can find the employee
	if ( num!= -1) {
		Employee temp = employees[num];
		string Ename = temp.getName();
		string Eaddress = temp.getAddress();
		int Eid = temp.getId();
		double Etax =  temp.getSalesTax();
		cout << Ename << endl;
		cout << Eaddress << endl;
		cout << Eid << endl;	
		cout <<	Etax << endl;
	} else {
		cout << "The employee could not be found" << endl;
	}
}
void Company::displayEmployees() {
	int len = employees.size;
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
