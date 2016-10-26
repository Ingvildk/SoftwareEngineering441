#include "employee.h"
#include <iostream>
#include <string>

using namespace std;


Employee::Employee(int ID, const string Name, const string Address, const string Job, double sal, int Dob) {
    id = ID;
	name = Name;
	address = Address;
	jobTitle = Job;
	salary = sal;
	dob = Dob;
}

Employee::~Employee() {

}

void Employee::setId(int ID){
    id = ID;
}

void Employee::setName(const string Name){
    name = Name;
}


void Employee::setAddress(const string Address){
    address = Address;
}


void Employee::setJob(const string Job){
    address = Job;
}



void Employee::setUser(const string Uname){
    username = Uname;
}


void Employee::setPass(const string p){
    password = p;
}


void Employee::setHours(double h) {
    hours = h;

}


void Employee::setSalary(double s) {
    salary = s;

}

void Employee::setDob(int Dob){
    dob = Dob;
}

int Employee::getId(){
    return id;
}

string Employee::getName() {
    return name;
}


string Employee::getAddress() {
    return address;
}


string Employee::getJob() {
    return jobTitle;
}



string Employee::getUser() {
    return username;
}


string Employee::getPass() {
    return password;
}


double Employee::getHours() {
    return hours;
}


double Employee::getSalary() {
    return salary;
}


int Employee::getDob() {
    return dob;
}



void Employee::display() {
    cout << "ID# : " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Job Title: " << jobTitle << endl;
	cout << "Hours: " << hours << endl;
	cout << "Date of Birth: " << dob << endl;
}

