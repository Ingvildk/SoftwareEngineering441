#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include <string>
using namespace std;

#include <string>
using namespace std;

class Employee {
    private:
        string name;     //name of employee
        string address;  //current address of employee
        string jobTitle; //job title of the employee
        string username; //log-in username
        string password; //log-in password
        double hours;   //amount of hours worked in a day
        double salary;  //hourly salary of an employee
        int dob;        //date of birth
        int id;
    public:
        Employee(const string, const string, const string, double, int);

        ~Employee();
        string getName() { return name; }
        string getAddress() { return address; }
        string getJob() { return jobTitle; }
        string getUser() { return username; }
        string getPass() { return password; }
        double getHours() { return hours; }
        double getSalary() { return salary; }
        int getDob() { return dob; }
        void setName(string na) {name = na;}
        void setAddress(string);
        void setJob(string);
        void setUser(string);
        void setPass(string);
        void setHours(double h) { hours = h; }
        void setSalary(double s) { salary = s; }
        void getID();
        void setID(int);
        void display();
};

#endif
