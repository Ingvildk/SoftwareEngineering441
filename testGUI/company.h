#ifndef _COMPANY_H
#define _COMPANY_H
#include <string>
#include "employee.h"
#include "store.h"
#include <vector>
#include <fstream>

//using namespace std;

class Company {
    private:
        std::vector<Employee> employees;   //list of employees
        std::vector<Store> stores;         //list of stores
        std::string name;                       //name of company
        std::string address;                    //current address of company
        int ID;
        //void searchStore(std::string Name);
    public:
        Company(std::string Name, std::string Address, int Id);
        Company();
        //~Company();
        std::string getName() { return name; }
        std::string getAddress() { return address; }
        void addStore(std::string Name, std::string Address, int Id, double Stax);
        void removeStore(std::string Name);
        void changeStore(std::string Name, std::string Address, int Id);
        void displayStore(std::string Name);
        void displayStores();
        void addEmployee(int ID, std::string Name, std::string Address, std::string Job, double Sal, int DOB);
        void removeEmployee(std::string Name);
        //void changeEmployee(std::string, std::string, double);
        void displayEmployee(std::string Name);
        void displayEmployees();
        void setName(std::string Name);
        void setAddress(std::string Address);
        void setId(int id);
        int getId();
        int cSearchStore(std::string Name);
        int cSearchEmployee(std::string Name);
        void displayCompany();
        void changeEmployee(std::string Name,std::string Job, std::string Address, double Hours);
        int employeeSize();
        void readEmpFile();
        void readinStores();
};

#endif
