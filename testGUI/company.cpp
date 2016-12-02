#include "company.h"
#include "store.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>


Company::Company(string Name, string Address, int Id) {
    name = Name;
    address = Address;
    ID = Id;

}

Company::Company() {
    name = ""; address = ""; ID = 0;
}

void Company::readinStores(){

    I.loadStores();

}

void Company::addStore(string Name, string Address, int Id, double Stax) {
        
    Store store(Name,Address,Id,Stax);
    I.addStore(store);
    I.saveStores();
}

int Company::cSearchEmployee(string Name) {
    I.beginEmp();
    
    while(I.hasNextEmp()){
        Employee E = I.getNextEmp();
        if(E.getName() == Name){
            return 1;
        }
    }
    return -1;
    
}

int Company::cSearchStore(string Name) {
    I.beginStore();
    while(I.hasNextStore()){
        Store S = I.getNextStore();
        if(S.getName() == Name){
            return 1;
        }
    }
    return -1;
    
}	

void Company::removeStore(string Name) {
    I.beginStore();
    while(I.hasNextStore()){
        Store S = I.getNextStore();
        if(S.getName() == Name){
            I.removeStore(S);
        }
    }
    I.saveStores();	
}

void Company::removeEmployee(string Name) {
    I.beginEmp();
    while(I.hasNextEmp()){
        Employee E = I.getNextEmp();
        if(E.getName() == Name){
            I.removeEmp(E);
        }
    }
    I.saveEmps();	
}

void Company::changeStore(string Name, string Address, int Id) {
    Store S;

    I.beginStore();
    while(I.hasNextStore()){
        S = I.getNextStore();
        if(S.getName() == Name){
            S.setAddress(Address);
            S.setId(Id);
        }
    }
    I.saveStores();

}

void Company::displayCompany() {
    cout << name << " " << address << " " << ID << " " << endl;
}

void Company::displayStore(string Name) {	
    Store S;
    I.beginStore();
    while(I.hasNextStore()){
        S = I.getNextStore();
        if(S.getName() == Name){
            cout << S.getName() << endl;
            cout << S.getAddress() << endl;
            cout << S.getId() << endl;
        }
    }
    I.saveStores();
}

void Company::addEmployee(int ID, string Name, string Address, string Job, double Sal, int DOB) {
    Employee E(ID,Name,Address,Job,Sal,DOB);
    I.addEmp(E);
    I.saveEmps();
}

void Company::changeEmployee(string Name, string Job, string Address, double Hours) {
    I.beginEmp();
    while(I.hasNextEmp()){
        Employee E = I.getNextEmp();
        if(E.getName() == Name){
            E.setJob(Job);
            E.setAddress(Address);
            E.setHours(Hours);
        }
    }
    I.saveEmps();

}

void Company::displayEmployee(string Name) {
    I.beginEmp();
    while(I.hasNextEmp()){
        Employee E = I.getNextEmp();
        if(E.getName() == Name){
            cout << E.getName() << endl;
            cout << E.getAddress() << endl;
            cout << E.getId() << endl;
            cout << E.getSalary() << endl;
        }
    }
}

void Company::displayEmployees() {
    I.beginEmp();
    while(I.hasNextEmp()){
        Employee E = I.getNextEmp();
        cout << E.getName() << endl;
        cout << E.getAddress() << endl;
        cout << E.getId() << endl;
        cout << E.getSalary() << endl;
        
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
