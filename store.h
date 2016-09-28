#ifndef _STORE_H
#define _STORE_H

#include "employee.h"
#include "inventory.h"
#include <vector>

class Store {
    private:
        std::vector<Employee*> employees;   //list of employees
        Inventory *inventory;               //inventory for the store
        char *name;                         //name of store
        char *address;                      //current address of store
        int id;                             //id of store
        void searchEmployee (const char*, char);
    public:
        Store(const char*, const char*, int);
        ~Store();
        Inventory *getInventory() { return inventory; }
        char *getName() { return name; }
        char *getAddress() { return address; }
        int getId() { return id; }
        void addEmployee(const char*, const char*, const char*, double, int);
        void removeEmployee(const char*, char);
        void changeEmployee(const char*, const char*, double);
        void displayEmployee(const char*, char);
        void displayEmployees();
        void setName(const char*);
        void setAddress(const char*);
        void setId(int i) { id = i; }
};

#endif
