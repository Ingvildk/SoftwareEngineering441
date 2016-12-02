#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "store.h"
#include "employee.h"
#include "product.h"


//using namespace std;

class Iterator{
	private:
		std::ifstream fin;
		std::ofstream fout;
		
		int StoreIndex;
		int EmpIndex;
		int ProductIndex;

		std::string InvFile;
		std::string EmpFile;
		std::string StoreFile;
	 	std::vector <Employee> employees;  
		std::vector <Store> stores;
		std::vector <Product> products;
		

	public:
		Iterator();
		~Iterator();
		void beginStore();
		void beginEmp();
		void beginProduct();
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