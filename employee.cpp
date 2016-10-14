#include "employee.h"
#include <iostream>
#include <cstring>
using namespace std;

Employee::Employee(string Nm, string addr, string Title, double Hrs, double Sal, int DOB, int ID) {
	name = Nm;
	address = addr;
	jobTitle = Title;
	hours = Hrs;
	salary = Sal;
	dob = DOB;
	id = ID;
}

Employee::~Employee() {
	name = null;
	address = null;
	job = null;
	hours = 0;
	dob = 0;
	id = 0;

void Employee::setAddress(String Addr){
	address = Addr;
}

void Employee::setJob(string Title){
	jobTitle = Title;
}

void Employee::setUser(string alias){
	username = alias;
}

void Employee::setPass(string pass){
	password = pass;
}

void Employee::setHours(double h){
	hours = h;
}

void Employee::setSalary(double s){
	salary = s;
}

void Employee::setID() {
	id = ID;
}

int Employee::getID() {
	return id;
}

void Employee::display() {
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Hours: " << hours << endl;
	cout << "Date of Birth: " << dob << endl;
}

