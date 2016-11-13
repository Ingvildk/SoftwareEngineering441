#include "company.h"
#include "store.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
//using namespace std;

Company::Company(std::string Name, std::string Address, int Id) {
    name = Name;
    address = Address;
    ID = Id;

    /* ONLY NEEDED FOR MULTIPLE COMPANIES, WHICH WE HAVE NOT IMPLEMENTED YET
    //if company does already exist
    std::string id = std::to_string(Id);
    bool doesExist = false;
    if(std::ifstream("companies.txt")){ //checks if company already exists
    std::ifstream fin;
    fin.open("companies.txt");
        while(getline(fin,word)){
            if(word == id){
                doesExist = true;
                break;// found the company in the txt
            }
        }//end while loop
        fin.close();
    }

    if(!doesExist){ //will add company as long as it isnt in file already
        fout.open("companies.txt","a");

        fout << Name << "\n";
        fout << Address << "\n";
        fout << Id << "\n";

        fout.close();

    }
    */
}

Company::Company() {
    name = ""; address = ""; ID = 0;
}

void Company::readinStores(){
    std::string name;
    std::string address;
    std::string idNum;
    int id;
    std::string Tax;
    double salesTax;
    std::ifstream fin;
    fin.open("stores.txt");

    while(!fin.eof()){
        getline(fin,name);
        getline(fin,address);
        getline(fin,idNum);
        getline(fin,Tax);

        int id = atoi(idNum.c_str());
        double salesTax = atof(Tax.c_str());

        //Store::Store(std::string Name, std::string Address, int ID, double stax){
        Store S(name,address,id,salesTax);
        stores.push_back(S);

        if(!fin.eof())
            break;
    }

    fin.close();

}

void Company::addStore(std::string Name, std::string Address, int Id, double Stax) {

        Store s(Name,Address,Id,Stax);
        stores.push_back(s);

        std::ofstream fout;
        fout.open("stores.txt", std::ios::app);

        fout << Name << "\n";
        fout << Address << "\n";
        fout << Id << "\n";
        fout << Stax << "\n";

        fout.close();
    }

int Company::cSearchEmployee(std::string Name) {
    int test = stores.size();
    int len = employees.size();
    for (int i = 0; i < len; i++) {
        if (employees[i].getName() == Name) {
            return i;
        }
    }
    return -1;
}

int Company::cSearchStore(std::string Name) {
    int len = stores.size();
    for (int i = 0; i < len; i++) {
        if (stores[i].getName() == Name) {
            return i;
        }
    }
    return -1;
}

void Company::removeStore(std::string Name) {
    if ( cSearchStore(Name) != -1 ) { // return index
        int index = cSearchStore(Name);
        stores.erase(stores.begin() + index);
        //now update text file
        if(std::ifstream("stores.txt")){
            std::ifstream fin;
            fin.open("stores.txt");//original doc
            std::ofstream fout;
            fout.open("NewStores.txt"); //updated doc
            std::string tempName;
            std::string tempAddress;
            std::string tempID;

            while(!fin.eof()){

                getline(fin,tempName);
                getline(fin,tempAddress);
                getline(fin,tempID);

                if(tempName != Name){
                    fout << tempName << "\n";
                    fout << tempAddress << "\n";
                    fout << tempID << "\n";
                }

                if(!fin.eof())
                    break;
            }
            fout.close();
            fin.close();

            remove("stores.txt");
            rename("stores.txt", "NewStores.txt");
    }
    else {
       std::cout << "The Store does not exists for this company" << std::endl;
    }
}
}

void Company::removeEmployee(std::string Name) {
    int index = cSearchEmployee(Name);
    // if you found index
    if ( index != -1)	{
        employees.erase(employees.begin() + index);
    } else {
        std::cout << "The employee can not be found" << std::endl;
    }
}

void Company::changeStore(std::string Name, std::string Address, int Id) {
    int index = cSearchStore(Name);
    // if stores exist in vector
    if ( index != -1) {
        stores[index].setName(Name);
        stores[index].setAddress(Address);
        stores[index].setId(Id);
        //now update txt file with same information
        if(std::ifstream("stores.txt")){
            std::ifstream fin;
            fin.open("stores.txt");//original doc
            std::ofstream fout;
            fout.open("NewStores.txt"); //updated doc
            std::string tempName;
            std::string tempAddress;
            std::string tempID;

            while(!fin.eof()){

                getline(fin,tempName);
                if(tempName == Name){
                    fout << Name << "\n";
                    fout << Address << "\n";
                    fout << Id<< "\n";
                }else{
                    getline(fin,tempName);
                    getline(fin,tempAddress);
                    getline(fin,tempID);
                    fout << tempName << "\n";
                    fout << tempAddress << "\n";
                    fout << tempID << "\n";
                }
                if(!fin.eof())
                    break;
            }//end while loop
            fout.close();
            fin.close();

            remove("stores.txt");
            rename("stores.txt", "NewStores.txt");

        }// end if(std::ifstream("stores.txt")

    }
    // not found in this companys stores vector
    else {
        std::cout << "The store do not exist" << std::endl;
    }
}

void Company::displayCompany() {
    std::cout << name << " " << address << " " << ID << " " << std::endl;
}

void Company::displayStore(std::string Name) {
    int num = cSearchStore(Name);
    // if num exist in stores vector
    if ( num != -1) {
        std::string storeName = stores[num].getName();
        std::string Address = stores[num].getAddress();
        int ID = stores[num].getId();
        std::cout << storeName << std::endl;
        std::cout << Address << std::endl;
        std::cout << ID << std::endl;
    }else {
        std::cout << "Could not find store" << std::endl;
    }
}

void Company::addEmployee(int ID, std::string Name, std::string Address, std::string Job, double Sal, int DOB) {
    //Employee constructor accepts this format:
        // (std::string ID, std::string Name, std::string Address, std::string Job, double Sal, int DOB)
    Employee e(ID,Name,Address,Job,Sal,DOB);
    employees.push_back(e);
}

void Company::changeEmployee(std::string Name, std::string Job, std::string Address, double Hours) {
    int index = cSearchEmployee(Name);
    employees[index].setName(Name);
    employees[index].setJob(Job);
    employees[index].setAddress(Address);
    employees[index].setHours(Hours);
}

void Company::displayEmployee(std::string Name) {
    int num = cSearchEmployee(Name);
    // if you can find the employee
    if ( num!= -1) {
        std::string Ename = employees[num].getName();
        std::string Eaddress = employees[num].getAddress();
        int Eid = employees[num].getId();
        int Esalary = employees[num].getSalary();
        std::cout << Ename << std::endl;
        std::cout << Eaddress << std::endl;
        std::cout << Eid << std::endl;
        std::cout <<	Esalary << std::endl;
    } else {
        std::cout << "The employee could not be found" << std::endl;
    }
}

void Company::displayEmployees() {
    int len = employees.size();
    // if the employees vector is zero
    if ( len == 0) {
        std::cout << "No elements in vector employees" << std::endl;
    } else {
        // loop through employees vector and dispay each element
        for (int i = 0; i < len; i++) {
            std::string na = employees[i].getName();
            displayEmployee(na);
        }
    }
}

void Company::setName(std::string Name) {
    name = Name;
}

void Company::setAddress(std::string Address) {
    address = Address;
}

void Company::setId(int id) {
    ID = id;
}

int Company::getId() {
    return ID;
}
