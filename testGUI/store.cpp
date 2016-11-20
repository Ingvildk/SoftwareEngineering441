#include "store.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

//using namespace std;

Store::Store(){
    id = 0;
    salesTax = 0.0;
    inventory = new Inventory(id);
    readEmpFile();
}


Store::Store(std::string Name, std::string Address, int ID, double stax){
    id = ID;
    name = Name;
    address = Address;
    salesTax = stax;
    inventory = new Inventory(id);
    readEmpFile();
}

//Store::Store(int ID){
//    inventory = new Inventory(ID);
//    std::string line;
//    std::string s = std::to_string(id);
//    std::ifstream myfile(s + "Store.txt");
//    if (!myfile.is_open()) {
//        std::ofstream myfile2(s + "Store.txt");
//        myfile2 << id << "\n" << name << "\n" << address << "\n" << salesTax << "/n";
//        myfile2.close();
//    }
//}

Store::~Store() {
    delete inventory;
}

int Store::searchEmployee(int ID){
    for (int empIndex = 0; (unsigned)empIndex < employees.size(); empIndex++) {
        if ((employees.at(empIndex)).getId() == ID){
            return empIndex;
        }
    }

    return -1;

}


void Store::readEmpFile(){
    std::string Name;
    std::string Address;
    std::string Job;
    std::string word("");
    std::ifstream empFile("employee.txt");

    if(!empFile.is_open()){
        std::cout << "There is no such file to READ\n" << std::endl;
        //exit(EXIT_FAILURE);
    }
    else{
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
            Employee temp = Employee(ID, Name, Address, Job, sal, Dob);
            std::cout << "Display employees"<< std::endl;
            temp.display();
        }
        empFile.close();

    }

}

void Store::setName(std::string Name){
    name = Name;
}



void Store::setAddress(std::string Address){
    address = Address;
}



void Store::setId(int ID){
    id = ID;
}


void Store::setSalesTax(double stax){
    salesTax = stax;
}



std::string Store::getName() {
    return name;
}


std::string Store::getAddress() {
    return address;
}


int Store::getId() {
    return id;
}


double Store::getSalesTax(){
    return salesTax;
}


Inventory Store::getInventory() {
    return *inventory;
}

void Store::addEmployee(int ID, const std::string Name, const std::string Address, const std::string Job, double sal, int Dob){
    if(searchEmployee(ID) == -1){
            employees.push_back(Employee(ID, Name, Address, Job, sal, Dob));
            std::ofstream re_WriteFile;
            re_WriteFile.open("employee.txt", std::ios::app);
            re_WriteFile << ID << "\n";
            re_WriteFile << Name << "\n";
            re_WriteFile << Address << "\n";
            re_WriteFile << Job << "\n";
            re_WriteFile << sal << "\n";
            re_WriteFile << Dob << "\n";
            re_WriteFile.close();
    }else{
        std::cout << "\n\n Employee with ID: " << ID << " already EXIST \n\n" << std::endl;
    }
}


void Store::removeEmployee(int ID, std::string empName ){
    if(searchEmployee(ID) == -1){
        std::cout << " \n\n There is no employee with ID# : " << ID << " and name : " << empName << "\n\n" << std::endl;
    }else{
        employees.erase(employees.begin() + searchEmployee(ID));
        std::string filenameOld = "employee.txt";
        std::string filenameNew = "employeeNEW.txt";
        std::ofstream myfile(filenameNew);

        for (int i = 0; (unsigned)i < employees.size(); i++) {
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


void Store::changeEmployee(int ID, std::string empName, std::string empAddress, int empDob){
    if(searchEmployee(ID) == -1){
        std::cout << "\n\n Employee with ID: " << ID << " already EXIST \n\n" << std::endl;
    }else{
        employees.at(searchEmployee(ID)).setName(empName);
        employees.at(searchEmployee(ID)).setAddress(empAddress);
        employees.at(searchEmployee(ID)).setDob(empDob);

        std::string filenameOld = "employee.txt";
        std::string filenameNew = "employeeNEW.txt";
        std::ofstream myfile(filenameNew);

        for (int i = 0; (unsigned)i < employees.size(); i++) {
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

void Store::displayEmployee(int ID){

    if(searchEmployee(ID) == -1){
      std::cout << " \n\n There is no employee with ID# : " << ID <<  std::endl;

    }else{
        employees.at(searchEmployee(ID)).display();
    }
}
void Store::displayEmployees(){
    for(int i = 0; (unsigned)i < employees.size(); i++){
        employees.at(i).display();
    }
}

Employee Store::returnEmployee(int ID) {
    int index = searchEmployee(ID);
    Employee emp = employees[index];
    setName(emp.getName());
    setAddress(emp.getAddress());
    setId(emp.getId());
    return emp;
}


