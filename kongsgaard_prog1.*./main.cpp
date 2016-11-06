#include "PasswordAutomata.h"
#include <iostream>
using namespace std;

int main() {
	Graph1 G1;
	string input;
	cout << "please type in password"<< endl;
	cin >> input;
	G1.q0(input);
	return 0;
}