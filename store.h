#ifndef _STORE_H
#define _STORE_H
#include "employee.h"
#include "inventory.h"
#include <string>
#include <vector>

class Store {
    private:
        std::vector<Employee> employees;   //list of employees
        Inventory inventory;               //inventory for the store
        string name;                         //name of store
        string address;                      //current address of store
        int id;                             //id of store
        void searchEmployee (string, string);
    public:
        Store(string, string, int);
        ~Store();
        Inventory getInventory() { return inventory; }
        string getName() { return name; }
        string getAddress() { return address; }
        int getId() { return id; }
        void addEmployee(string, string, string, double, int);
        void removeEmployee(string, string);
        void changeEmployee(string, string, double);
        void displayEmployee(string, string);
        void displayEmployees();
        void setName(string);
        void setAddress(string);
        void setId(int i) { id = i; }
};

#endif
