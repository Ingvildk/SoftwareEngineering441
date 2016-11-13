#include "employee.h"
#include <iostream>
#include <string>

//using namespace std;


Employee::Employee(int ID, const std::string Name, const std::string Address, const std::string Job, double sal, int Dob) {
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

void Employee::setName(const std::string Name){
    name = Name;
}


void Employee::setAddress(const std::string Address){
    address = Address;
}


void Employee::setJob(const std::string Job){
    address = Job;
}



void Employee::setUser(const std::string Uname){
    username = Uname;
}


void Employee::setPass(const std::string p){
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

std::string Employee::getName() {
    return name;
}


std::string Employee::getAddress() {
    return address;
}


std::string Employee::getJob() {
    return jobTitle;
}



std::string Employee::getUser() {
    return username;
}


std::string Employee::getPass() {
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
    std::cout << "ID# : " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Job Title: " << jobTitle << std::endl;
    std::cout << "Hours: " << hours << std::endl;
    std::cout << "Date of Birth: " << dob << std::endl;
}

