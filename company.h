#ifndef _COMPANY_H
#define _COMPANY_H
#include <string>
#include "employee.h"
#include "store.h"
#include <vector>
#include <fstream>

using namespace std;

class Company {
    private:
        static vector <Employee> employees;   //list of employees
        static vector <Store> stores;         //list of stores
        string name;                       //name of company
        string address;                    //current address of company
        int ID;
        //void searchStore(string Name);
    public:
        Company(string Name, string Address, int Id);
        Company();
        //~Company();
        string getName() { return name; }
        string getAddress() { return address; }
        void addStore(string Name, string Address, int Id, double Stax);
        void removeStore(string Name);
        void changeStore(string Name, string Address, int Id);
        void displayStore(string Name);
        void displayStores();
        void addEmployee(int ID, string Name, string Address, string Job, double Sal, int DOB);
        void removeEmployee(string Name);
        //void changeEmployee(string, string, double);
        void displayEmployee(string Name);
        void displayEmployees();
        void setName(string Name);
        void setAddress(string Address);
        void setId(int id);
        int getId();
        int cSearchStore(string Name);
        int cSearchEmployee(string Name);
        void displayCompany();
        void changeEmployee(string Name,string Job, string Address, double Hours);
        int employeeSize();
        void readEmpFile();
        void readinStores();
};

#endif
