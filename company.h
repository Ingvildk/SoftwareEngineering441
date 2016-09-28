#ifndef _COMPANY_H
#define _COMPANY_H

#include "employee.h"
#include "store.h"
#include <vector>

class Company {
    private:
        std::vector<Employee*> employees;   //list of employees
        std::vector<Store*> stores;         //list of stores
        char *name;                         //name of company
        char *address;                      //current address of company
    public:
        Company(const char*, const char*);
        ~Company();
        char *getName() { return name; }
        char *getAddress() { return address }
        void addStore(const char*, const char*, int);
        void removeStore(const char*);
        void changeStore(const char*, const char*, int);
        void displayStore(const char*);
        void displayStores();
        void addEmployee(const char*, const char*, const char*, double, int);
        void removeEmployee(const char*, char);
        void changeEmployee(const char*, const char*, double);
        void displayEmployee(const char*, char);
        void displayEmployees();
        void setName(const char*);
        void setAddress(const char*);
};

#endif
