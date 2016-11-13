#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include <string>
//using namespace std;


class Employee {
    private:
        int id;
        std::string name;     //name of employee
        std::string address;  //current address of employee
        std::string jobTitle; //job title of the employee
        std::string username; //log-in username
        std::string password; //log-in password
        double hours;   //amount of hours worked in a day
        double salary;  //hourly salary of an employee
        int dob;        //date of birth
    public:
        Employee(int ID, const std::string Name, const std::string Address, const std::string Job, double sal, int Dob);
        ~Employee();
        void setId(int ID);
        void setName(const std::string Name);
        void setAddress(const std::string Address);
        void setJob(const std::string Job);
        void setUser(const std::string Uname);
        void setPass(const std::string p);
        void setHours(double h);
        void setSalary(double s);
        void setDob(int Dob);
        int getId();
        std::string getName();
        std::string getAddress();
        std::string getJob();
        std::string getUser();
        std::string getPass();
        double getHours();
        double getSalary();
        int getDob();
        void display();
};

#endif
