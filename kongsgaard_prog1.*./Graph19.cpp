#include "PasswordAutomata.h"
#include <string>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void Graph19::q0(string input) {
	cout << "Graph19 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (input.length() == 3) {
		cout << "Error: The password was too short" << endl;
		return;
	} else {
		G19.q1(input);
	}
}

void Graph19::q1(string input) {
	cout << "Graph19 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (input.length() == 4) {
		cout << "Error: The password was too short" << endl;
		return;
	}else {
		G19.q2(input);
	}
}
	
void Graph19::q2(string input){
	cout << "Graph19 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (input.length() == 5) {
		cout << "Error: The password was too short" << endl;
		return;
	}else {
		G19.q3(input);
	}	
}

void Graph19::q3(string input) {
	cout << "Graph19 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (input.length() == 6) {
		cout << "Error: The password is too short" << endl;
		return;
	}else {
		G19.q4(input);
	}	
}

void Graph19::q4(string input) {
	cout << "Graph19 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (input.length() == 7) {
		cout << "Error: The password is too short" << endl;
		return;
	}else {
		G19.q5(input);
	}	
}

void Graph19::q5(string input) {
	cout << "Graph19 q5" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (input.length() == 8) {
		cout << "The password is valid" << endl;
		return;
	}else {
		G19.q6(input);
	}	
}

void Graph19::q6(string input) {
	cout << "Graph19 q6" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 8;
	int elem = input[8];
	if (input.length() == 9) {
		cout << "The password is valid!" << endl;
		return;
	}else {
		G19.q7(input);
	}	
}

void Graph19::q7(string input) {
	cout << "Graph19 q7" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 9;
	int elem = input[9];
	if (input.length() == 10) {
		cout << "The password is valid!" << endl;
		return;
	}else {
		G19.q8(input);
	}	
}

// TRAP STATE
void Graph19::q8(string input) {
	cout << "Graph19 q8" << endl;		
	cout << "Error Not a Valid Password" << endl;
	return;
}








