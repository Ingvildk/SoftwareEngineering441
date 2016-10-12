#include "employee.h"
#include <iostream>
#include <cstring>
using namespace std;


<<<<<<< Updated upstream
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
=======
using namespace std;

Employee::Employee(string Nm, string addr, string Title, double Hrs, double Sal, int DOB) {
	name = Nm;
	address = addr;
	jobTitle = Title;
	hours = Hrs;
	salary = Sal;
	dob = DOB;
}

Employee::setAddress(String Addr){
	address = Addr;
}

Employee::setJob(string Title){
	jobTitle = Title;
}

Employee::setUser(string alias){
	username = alias;
}

Employee::setPass(string pass){
	password = pass;
}

Employee::setHours(double h){
	hours = h;
}

Employee::setSalary(double s){
	salary = s;
>>>>>>> Stashed changes
}

void Employee::display() {
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Hours: " << hours << endl;
	cout << "Date of Birth: " << dob << endl;
}

Employee::~Employee() {
	
}