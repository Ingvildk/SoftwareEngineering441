#ifndef _STORE_H
#define _STORE_H
#include "employee.h"
#include "inventory.h"
#include <string>
#include <vector>

using namespace std;

class Store {
    private:
        vector <Employee> employees;   //list of employees
        Inventory inventory;               //inventory for the store
        string name;                         //name of store
        string address;                      //current address of store
        int id;                             //id of store
        double salesTax;
        int searchEmployee (int);
    public:
        Store();
        Store(string Name, string Address, int ID, double stax);
        ~Store();
        void readEmpFile();
        void setName(string Name);
        void setAddress(string Address);
        void setId(int ID);
        void setSalesTax(double stax);
        string getName();
        string getAddress();
        int getId();
        double getSalesTax();
        Inventory getInventory();
        void addEmployee(int ID, const string Name, const string Address, const string Job, double sal, int Dob);
        void removeEmployee(int ID, string empName);
        void changeEmployee(int ID, string empName, string empAddress, int empDob);
        void displayEmployee(int ID);
        void displayEmployees();

};

#endif
