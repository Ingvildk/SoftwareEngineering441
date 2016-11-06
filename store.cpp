#include <iostream>
#include "store.h"

using namespace std;

Store::Store(){
    id = 0;
    name = address = "Default";
}


Store::Store(string Name, string Address, int ID, double stax){
    id = ID;
    name = Name;
    address = Address;
    salesTax = stax;
}


Store::~Store(){

}


void Store::setName(string Name){
    name = Name;
}



void Store::setAddress(string Address){
    address = Address;
}



void Store::setId(int ID){
    id = ID;
}


void Store::setSalesTax(double stax){
    salesTax = stax;
}



string Store::getName() { return name; }

string Store::getAddress() { return address; }

int Store::getId() { return id; }

double Store::getSalesTax(){ return salesTax; }


Inventory Store::getInventory() { return inventory; }





void Store::addEmployee(string empName, string empAddress, string empjobTitle, double empHours, double empSalary, int empDob, int ID){
    Employee empObject(empName, empAddress, empjobTitle, empHours, empHours, empDob);
    if(!searchEmployee(empName, empAddress)){
            employees.push_back(empObject.Employee(empName, empAddress, empjobTitle, empHours, empSalary, empDob));
    }else{
        cout << "\n\n Employee with Name: " << empName << " and with Address: " << empAddress << " \n\n" << endl;
    }
}


// still working on this beacuse need employee and inventory file
void Store::removeEmployee(string empName, string empAddress){
    Employee empObject;
    if(!searchEmployee(empName, empAddress)){
        cout << " \n\n There is no employee name : " << empName << "\n\n" << endl;
    }else{
        employees.erase(empObject); // not correct yet
    }
}

// still working on this because need employee and inventory file
void Store::changeEmployee(string empName, string empAddress, double empDob){
    Employee empObject;
    if(!searchEmployee(empName, empAddress)){

    }
}
void displayEmployee(string empName, string empAddress){
    Employee empObject;
    if(searchEmployee(empName, empAddress)){

     // print one single employee

    }else{
        cout << "There is NO Employee with name: '" << empName << "' in the this Store" << endl;
    }
}
void displayEmployees(){
    Employee empObject;
    for(int i = 0; i < employees.size(); i++){
        empObject.display();
    }
}


