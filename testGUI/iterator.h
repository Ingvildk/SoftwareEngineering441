#include <iostream>
#include <fstream>
#include <string>
#include "store.h"
#include "employee.h"
#include "product.h"

/**
example of how to use this class in other files :
	iterator stores;
	stores.loadStores();
	while(stores.hasNextStore()){
		Store& S;
		S = stores.getNextStore();
		//check / modify / ect	
	}
	stores.saveStores();
*/

using namespace std;

class Iterator{
	private:
		ifstream fin;
		ofstream fout;
		
		int StoreIndex;
		int EmpIndex;
		int ProductIndex;

		string InvFile;
		string EmpFile;
		string StoreFile;
	 	vector <Employee> employees;  
		vector <Store> stores;
		vector <Product> products;
	public:
		Iterator();
		~Iterator();
		
		//store iterator
		void loadStores();//read in file and assign to vector
		Store& getNextStore();
		bool hasNextStore();
		void removeStore(Store S);
		void addStore(Store S);
		void saveStores();//updates txt with current vector contents

		//employee iterator
		void loadEmps();//read in file and assign to vector
		Employee& getNextEmp();
		bool hasNextEmp();
		void removeEmp(Employee E);
		void addEmp(Employee E);
		void saveEmps();//updates txt with current vector contents
		
		//product iterator
		void loadProducts();//read in file and assign to vector
		Product& getNextProduct();
		bool hasNextProduct();
		void removeProduct(Product P);	
		void addProduct(Product P);	
		void saveProducts();//updates txt with current vector contents

};