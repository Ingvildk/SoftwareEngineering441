#include "PasswordAutomata.h"
#include <string>
#include <iostream>
using namespace std;


void Graph6::q0(string input) {
	cout << "Graph6 q0" << endl;		
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
	if (G1.isUpperCase(elem)) {
		G11.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q1(input);
	}else {
		G6.q1(input);
	}
}

void Graph6::q1(string input) {
	cout << "Graph6 q1" << endl;		
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
	if (G1.isUpperCase(elem)) {
		G11.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q2(input);
	}else {
		G6.q2(input);
	}
}
	
void Graph6::q2(string input){
	cout << "Graph6 q2" << endl;		
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
	if (G1.isUpperCase(elem)) {
		G11.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q3(input);
	}else {
		G6.q3(input);
	}	
}

void Graph6::q3(string input) {
	cout << "Graph6 q3" << endl;		
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
	if (G1.isUpperCase(elem)) {
		G11.q4(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q4(input);
	}else {
		G6.q4(input);
	}	
}

void Graph6::q4(string input) {
	cout << "Graph6 q4" << endl;		
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
	if (G1.isUpperCase(elem)) {
		G11.q5(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q5(input);
	}else {
		G6.q5(input);
	}	
}


// TRAP STATE
void Graph6::q5(string input) {
	cout << "Graph6 q5" << endl;	
	cout << "Error Not a Valid Password" << endl;
	return;
}








