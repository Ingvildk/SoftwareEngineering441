#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
using namespace std;

class Employee {
    private:
        char *name;     //name of employee
        char *address;  //current address of employee
        char *jobTitle; //job title of the employee
        char *username; //log-in username
        char *password; //log-in password
        double hours;   //amount of hours worked in a day
        double salary;  //hourly salary of an employee
        int dob;        //date of birth
    public:
        Employee(const char*, const char*, const char*, double, int);
        ~Employee();
        char *getName() { return name; }
        char *getAddress() { return address; }
        char *getJob() { return jobTitle; }
        char *getUser() { return username; }
        char *getPass() { return password; }
        double getHours() { return hours; }
        double getSalary() { return salary; }
        int getDob() { return dob; }
        void setAddress(const char*);
        void setJob(const char*);
        void setUser(const char*);
        void setPass(const char*);
        void setHours(double h) { hours = h; }
        void setSalary(double s) { salary = s; }
        void display();
};

#endif
