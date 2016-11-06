#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include <string>
using namespace std;


class Employee {
    private:
        int id;
        string name;     //name of employee
        string address;  //current address of employee
        string jobTitle; //job title of the employee
        string username; //log-in username
        string password; //log-in password
        double hours;   //amount of hours worked in a day
        double salary;  //hourly salary of an employee
        int dob;        //date of birth
    public:
        Employee(int ID, const string Name, const string Address, const string Job, double sal, int Dob);
        ~Employee();
        void setId(int ID);
        void setName(const string Name);
        void setAddress(const string Address);
        void setJob(const string Job);
        void setUser(const string Uname);
        void setPass(const string p);
        void setHours(double h);
        void setSalary(double s);
        void setDob(int Dob);
        int getId();
        string getName();
        string getAddress();
        string getJob();
        string getUser();
        string getPass();
        double getHours();
        double getSalary();
        int getDob();
        void display();
};

#endif
