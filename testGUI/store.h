#ifndef _STORE_H
#define _STORE_H
#include "employee.h"
#include "inventory.h"
#include <string>
#include <vector>

//using namespace std;

class Store {
    private:
        std::vector <Employee> employees;   //list of employees
        Inventory *inventory;               //inventory for the store
        std::string name;                         //name of store
        std::string address;                      //current address of store
        int id;                             //id of store
        double salesTax;
        int searchEmployee (int);
    public:
        Store();
        Store(std::string Name, std::string Address, int ID, double stax);
//        Store(int ID);
        ~Store();
        void readEmpFile();
        void setName(std::string Name);
        void setAddress(std::string Address);
        void setId(int ID);
        void setSalesTax(double stax);
        std::string getName();
        std::string getAddress();
        int getId();
        double getSalesTax();
        Inventory getInventory();
        void addEmployee(int ID, const std::string Name, const std::string Address, const std::string Job, double sal, int Dob);
        void removeEmployee(int ID, std::string empName);
        void changeEmployee(int ID, std::string empName, std::string empAddress, int empDob);
        void displayEmployee(int ID);
        void displayEmployees();
        Employee returnEmployee(int);

};

#endif
