#ifndef _STORE_H
#define _STORE_H
#include "employee.h"
#include "inventory.h"
#include <string>
#include <vector>

using namespace std;

class Store {
    private:
        std::vector<Employee> employees;   //list of employees
        Inventory inventory;               //inventory for the store
        string name;                         //name of store
        string address;                      //current address of store
        int id;                             //id of store
        double salesTax;

        // still have to implement
        void searchEmployee (string, string);
    public:
        Store();
        Store(string Name, string Address, int ID, double stax);
        ~Store();
        void setName(string Name);
        void setAddress(string Address);
        void setId(int ID);
        void setSalesTax(double stax);
        string getName();
        string getAddress();
        int getId();
        double getSalesTax();
        Inventory getInventory();
        void addEmployee(string empName, string empAddress, string empjobTitle, double empHours, double empSalary, int empDob);
        void removeEmployee(string empName, string empAddress);
        void changeEmployee(string empName, string empAddress, double empDob);
        void displayEmployee(string empName, string empAddress);
        void displayEmployees();

};

#endif
