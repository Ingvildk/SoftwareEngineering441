#include "store.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;


Store::Store(){
    id = 0;
    salesTax = 0.0;
    name = address = "Default";
}


Store::Store(string Name, string Address, int ID, double stax){
    id = ID;
    name = Name;
    address = Address;
    salesTax = stax;
}


int Store::searchEmployee(int ID){
    for (int empIndex = 0; empIndex < employees.size(); empIndex++) {
		if ((employees.at(empIndex)).getId() == ID){
			return empIndex;
		}
	}

	return -1;

}

Store::~Store(){

}


void Store::readEmpFile(){
    std::string Name;
    string Address;
    string Job;
    string word("");
    ifstream empFile("employee.txt");

    if(!empFile.is_open()){
        cout << "There is no such file to READ\n" << endl;
        exit(EXIT_FAILURE);
    }else{
        while(getline(empFile, word)){
            int ID = atoi(word.c_str());
            getline(empFile, Name);
            getline(empFile, Address);
            getline(empFile, Job);
            getline(empFile, word);
            double sal = atof(word.c_str());
            getline(empFile, word);
            int Dob = atoi(word.c_str());
            employees.push_back(Employee(ID, Name, Address, Job, sal, Dob));
        }
        empFile.close();

    }

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



string Store::getName() {
    return name;
}


string Store::getAddress() {
    return address;
}


int Store::getId() {
    return id;
}


double Store::getSalesTax(){
    return salesTax;
}


Inventory Store::getInventory() {
    return inventory;
}




void Store::addEmployee(int ID, const string Name, const string Address, const string Job, double sal, int Dob){
    if(searchEmployee(ID) == -1){
            employees.push_back(Employee(ID, Name, Address, Job, sal, Dob));
            ofstream re_WriteFile;
            re_WriteFile.open("employee.txt", std::ios::app);
            re_WriteFile << ID << "\n";
            re_WriteFile << Name << "\n";
            re_WriteFile << Address << "\n";
            re_WriteFile << Job << "\n";
            re_WriteFile << sal << "\n";
            re_WriteFile << Dob << "\n";
            re_WriteFile.close();

    }else{
        cout << "\n\n Employee with ID: " << ID << " already EXIST \n\n" << endl;
    }
}



void Store::removeEmployee(int ID, string empName ){
    if(searchEmployee(ID) == -1){
        cout << " \n\n There is no employee with ID# : " << ID << " and name : " << empName << "\n\n" << endl;
    }else{
        employees.erase(employees.begin() + searchEmployee(ID));
	string filenameOld = "employee.txt";
	string filenameNew = "employeeNEW.txt";
	ofstream myfile(filenameNew);

	for (int i = 0; i < employees.size(); i++) {
		myfile << (employees.at(i)).getId() << "\n";
		myfile << (employees.at(i)).getName() << "\n";
		myfile << (employees.at(i)).getAddress() << "\n";
		myfile << (employees.at(i)).getJob() << "\n";
		myfile << (employees.at(i)).getSalary() << "\n";
		myfile << (employees.at(i)).getDob() << "\n";
	}
	myfile.close();

	if (myfile) {
		remove(filenameOld.c_str());
		rename(filenameNew.c_str(), filenameOld.c_str());
	}
    }
}


void Store::changeEmployee(int ID, string empName, string empAddress, int empDob){
    if(searchEmployee(ID) == -1){
        cout << "\n\n Employee with ID: " << ID << " already EXIST \n\n" << endl;
    }else{
        employees.at(searchEmployee(ID)).setName(empName);
        employees.at(searchEmployee(ID)).setAddress(empAddress);
        employees.at(searchEmployee(ID)).setDob(empDob);
    }
}

void Store::displayEmployee(int ID){

    if(searchEmployee(ID) == -1){
      cout << " \n\n There is no employee with ID# : " << ID <<  endl;

    }else{
        employees.at(searchEmployee(ID)).display();
    }
}
void Store::displayEmployees(){
    for(int i = 0; i < employees.size(); i++){
        employees.at(i).display();
    }
}


