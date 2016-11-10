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
        void searchStore(string Name);
    public:
        Company(string Name, string Address, int Id);
        Company();
        //~Company();
        string getName() { return name; }
        string getAddress() { return address; }
        void addStore(string, string, int, double);
        void removeStore(string);
        void changeStore(string, string, int);
        void displayStore(string);
        void displayStores();
        void addEmployee(int, string, string, string, double, int);
        void removeEmployee(string);
        void changeEmployee(string, string, double);
        void displayEmployee(string);
        void displayEmployees();
        void setName(string);
        void setAddress(string);
        void setId(int);
        int getId();
        int cSearchStore(string);
        int cSearchEmployee(string);
        void displayCompany();
        void changeEmployee(string,string, string, double);
        int employeeSize();
        void readEmpFile();
        void readinStores();
};

#endif
