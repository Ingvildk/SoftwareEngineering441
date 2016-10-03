class EmployeeListener
{
public:
	virtual void employeeChanged() = 0;
};
class Employee //Subject
{
public:
	void addEmployeeListener(EmployeeListener *)
	{
		... add listener to  list
	}
	void removeEmployeeListener(EmployeeListener *)
	{	
		... remove listener to list
	}
	void addEmployee(....)
	{
		... // change local state
		notifyEmployeeListener();
	}
private: 
	void notifyEmployeeListener()
	{
		....iterate thorigh list and call employeeChanged
	}
	std::list<EmployeeListener*> m_listeners;		
};
class Company : public EmployeeListener // Observers
{
public:
	virtual void employeeChanged()
	{
		...update myself
	}
}
class Store : public EmployeeListener // Observers
{
	virtual void employeeChanged()
	{
		..update myself
	}
}
Company *c = new Company();
Store *s1 = new Store();
Employee *e = new Employee();
Employee *e = new Employee();
e->addEmployeeListener(c);
e->addEmployeeListener(s1); 