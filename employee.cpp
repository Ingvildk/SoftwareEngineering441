#include "employee.h"
#include <iostream>
#include <cstring>

Employee::Employee(const string Name, const string Address, const string Job, double Hours, int Dob) {
	name = Name;
	address = Address;
	job = Job;
	hours = Hours;
	dob = Dob;
}

Employee::~Employee() {
	name = null;
	address = null;
	job = null;
	hours = 0;
	dob = 0;
}

void Employee::display() {
	cout << name << endl;
	cout << address << endl;
	cout << hours << endl;
	cout << dob << endl;
}
