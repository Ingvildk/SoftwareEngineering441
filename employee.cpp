#include "employee.h"
#include <cstring>

using namespace std;

Employee::Employee(const char* Name, const char* Address, const char* Job, double Hours, int Dob) {
	name = new char[strlen(Name) + 1];
	address = new char[strlen(Address) + 1];
	job = new char[strlen(Job) + 1];
	hours = Hours;
	dob = Dob;
	
	for (int i = 0; Name[i] != '\0'; i++)
        name[i] = Name[i];

    name[strlen(Name)] = '\0';
    
    for (int i = 0; Address[i] != '\0'; i++)
        address[i] = Address[i];

    address[strlen(Address)] = '\0';
    
    for (int i = 0; Job[i] != '\0'; i++)
        job[i] = Job[i];

    job[strlen(Job)] = '\0';
}

Employee::~Employee() {
	delete [] name;
	delete [] address;
	delete [] job;
}

void Employee::display() {
	cout << name << endl;
	cout << address << endl;
	cout << hours << endl;
	cout << dob << endl;
}
