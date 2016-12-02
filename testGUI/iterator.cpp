#include "iterator.h"

/**
	This class serves as an interface between the code and the data base.
	The method of saving can change without effecting any other code besides
	this file.
	
	For now: the project has not been scaled up to handle multiple 
		inventories, employee files, and store files. This is why the txt files
		are hard coded at this moment.
*/

Iterator::Iterator(){
	StoreIndex = 0;
	EmpIndex = 0;
	ProductIndex = 0;

	InvFile = "Inventory.txt";
	EmpFile = "employee.txt";
	StoreFile = "stores.txt";
}

Iterator::~Iterator(){
	StoreIndex = 0;
	EmpIndex = 0;
	ProductIndex = 0;
}

void Iterator::loadStores(){
	string name;
	string address;
	string idNum;
	int id;
	string Tax;
	double salesTax;

	fin.open("stores.txt");

	while(!fin.eof()){
		getline(fin,name);
		getline(fin,address);
		getline(fin,idNum);
		getline(fin,Tax);

		int id = atoi(idNum.c_str());
		double salesTax = atof(Tax.c_str());
		
		//Store::Store(string Name, string Address, int ID, double stax){
		Store S(name,address,id,salesTax);
		stores.push_back(S);
			
		if(!fin.eof())
			break;
	}
	
	fin.close();

}

Store& Iterator::getNextStore(){
	StoreIndex++;
	return stores.at(StoreIndex);
}

bool Iterator::hasNextStore(){
	if(StoreIndex == stores.size()){
		return false;
	}
	return true;
}

void Iterator::removeStore(Store S){
	for(int i = 0; i < stores.size();i++){
		if(S.getId() == stores.at(i).getId()){
			stores.erase(stores.begin() + i - 1);
		}
	}
}

void Iterator::addStore(Store S){
	stores.push_back(S);
}

void Iterator::saveStores(){
	fout.open("stores.txt", std::ios::app);
	
	for(int i = 0; i < stores.size();i++){
		fout << stores.at(i).getName() << "\n";
		fout << stores.at(i).getAddress() << "\n";
		fout << std::to_string(stores.at(i).getId()) << "\n";
		fout << std::to_string(stores.at(i).getSalesTax()) << "\n";
	}
	fout.close();
}

void Iterator::loadEmps(){
	string Name;
	string Address;
	string Job;
	string word("");
	ifstream empFile("employee.txt");

	if(!empFile.is_open()){
		cout << "There is no such file to READ\n" << endl;
		exit(EXIT_FAILURE);
	}else{
		while(getline(empFile, word)){
			int ID = atoi(word.c_str());
			getline(empFile, Name);
			getline(empFile, Address);
			getline(empFile, Job);
			getline(empFile, word);
			double sal = atof(word.c_str());
			getline(empFile, word);
			int Dob = atoi(word.c_str());
			employees.push_back(Employee(ID, Name, Address, Job, sal, Dob));
		}
		empFile.close();

	}

}

Employee& Iterator::getNextEmp(){
	EmpIndex++;
	return employees.at(EmpIndex);
}

bool Iterator::hasNextEmp(){
	if(EmpIndex == employees.size()){
		return false;
	}
	return true;
}

void Iterator::removeEmp(Employee E){
	for(int i = 0; i < employees.size();i++){
		if(E.getId() == employees.at(i).getId()){
			employees.erase(employees.begin() + i - 1);
		}
	}
}

void Iterator::addEmp(Employee E){
	employees.push_back(E);
}

void Iterator::saveEmps(){
	fout.open("employees.txt", std::ios::app);
	
	for(int i = 0; i < employees.size(); i++){
		fout << std::to_string(employees.at(i).getId()) << "\n";
		fout << employees.at(i).getName() << "\n";
		fout << employees.at(i).getAddress() << "\n";
		fout << employees.at(i).getJob() << "\n";
		fout << std::to_string(employees.at(i).getSalary()) << "\n";
		fout << std::to_string(employees.at(i).getDob()) << "\n";
	}
	
	fout.close();
}

void Iterator::loadProducts(){
	ifstream myfile("Inventory.txt");
	string line;
	int id;
	string name;
	string brand;
	string dept;
	int q;
	double m;
	double p;
	
	if (myfile.is_open()) {
    	while (getline(myfile, line)) {
    		if (line == "")
    			break;
    		else {
    			id = stoi(line);
    			getline(myfile, name);
    			getline(myfile, brand);
    			getline(myfile, dept);
    			getline(myfile, line);
    			q = stoi(line);
    			getline(myfile, line);
    			m = stod(line);
    			getline(myfile, line);
    			p = stod(line);
    			products.push_back(Product(id, name, brand, dept, q, m, p));
    		}
      	}
    	myfile.close();
  	}

}

Product& Iterator::getNextProduct(){
	ProductIndex++;
	return products.at(ProductIndex);
}

bool Iterator::hasNextProduct(){
	if(ProductIndex == products.size()){
		return false;
	}
	return true;
}

void Iterator::removeProduct(Product P){
	for(int i = 0; i < products.size();i++){
		if(P.getID() == products.at(i).getID()){
			products.erase(products.begin() + i - 1);
		}
	}
}

void Iterator::addProduct(Product P){
	products.push_back(P);
}

void Iterator::saveProducts(){
	fout.open(InvFile);
	
	for(int i = 0; i < products.size(); i++){
		fout << (products.at(i)).getID() << "\n";
		fout << (products.at(i)).getName() << "\n";
		fout << (products.at(i)).getBrand() << "\n";
		fout << (products.at(i)).getDept() << "\n";
		fout << (products.at(i)).getQuantity() << "\n";
		fout << (products.at(i)).getMsrp() << "\n";
		fout << (products.at(i)).getPrice() << "\n";
	}
	
	fout.close();
}

