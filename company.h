#ifndef _COMPANY_H
#define _COMPANY_H
#include <string>
#include "employee.h"
#include "store.h"
#include <vector>
using namespace std;

class Company {
    private:
        std::vector<Employee> employees;   //list of employees
        std::vector<Store> stores;         //list of stores
        string name;                         //name of company
        string address;                      //current address of company
        int ID;
        void searchStore(string Name);
    public:
        Company(string Name, string Address, int Id);
        ~Company();
        string getName() { return name; }
        string getAddress() { return address; }
        void addStore(string, string, int);
        void removeStore(string);
        void changeStore(string, string, int);
        void displayStore(string);
        void displayStores();
        void addEmployee(string, string, string, double, int);
        void removeEmployee(string, string);
        void changeEmployee(string, string, double);
        void displayEmployee(string, string);
        void displayEmployees();
        void setName(string);
        void setAddress(string);
        int cSearchStore(string);
        void displayCompany();
};

#endif
