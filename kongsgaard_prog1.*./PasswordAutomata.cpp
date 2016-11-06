#include "PasswordAutomata.h"
#include <string>
#include <iostream>
using namespace std;

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

bool Graph1::isDigit(int elem) {
	if (elem >= digitStart && elem <= digitEnd) {
		return true;
	} else {
		return false;
	}
}

bool Graph1::isUpperCase(int elem) {
	if (elem >= upperStart && elem <= upperEnd) {
		return true;
	}else {
		return false;
	}
}

bool Graph1::isSpecialCharacter(int elem) {
	if ( (elem >= specialStart1 && elem <=  specialEnd1) ||
			 (elem >= specialStart2 &&	elem <= specialEnd2) ||
			 (elem >= specialStart3 &&	elem <= specialEnd3) ||
			 (elem >= specialStart4 &&	elem <= specialEnd4) ||
			 (elem >= specialStart5 &&	elem <= specialEnd5)  ) 
	{
		return true;
	} else {
		return false;
	}
}

bool Graph1::validLength(int len) {
	if (len >= 8 && len <= 10) {
		return true;
	} else return false;
}

void Graph1::q0(string input) {
	cout << "Graph1 q0" << endl;	
	int len = 0;
	int elem = input[0];
	if (G1.isUpperCase(elem)) {
		G1.q1(input);
	}else if (isDigit(elem)) {
		G1.q2(input);
	}else if(isSpecialCharacter(elem)) {
		G1.q3(input);
	}else {
		G1.q4(input);
	}
}	

void Graph1::q1(string input) {
	cout << "Graph1 q0" << endl;	
	int len = 1;
	int elem = input[1];
	if (G1.isUpperCase(elem)) {
		G14.q0(input);
	}else if (isDigit(elem)) {
		G10.q0(input);
	}else if(isSpecialCharacter(elem)) {
		G9.q0(input);
	}else {
		G8.q0(input);
	}
}

void Graph1::q2(string input) {
	cout << "Graph1 q0" << endl;	
	
	int len = 1;
	int elem = input[1];
	if (G1.isUpperCase(elem)) {
		G10.q0(input);
	}else if (G1.isDigit(elem)) {
		G6.q0(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G14.q0(input);
	}else {
		G7.q0(input);
	}
}	

void Graph1::q3(string input) {
	cout << "Graph1 q0" << endl;			
	int len = 1;
	int elem = input[1];
	if (isUpperCase(elem)) {
		G9.q0(input);
	}else if (isDigit(elem)) {
		G4.q0(input);
	}else if(isSpecialCharacter(elem)) {
		G3.q0(input);
	}else {
		G3.q0(input);
	}
}

void Graph1::q4(string input) {
	cout << "Graph1 q0" << endl;		
	
	int len = 1;
	int elem = input[1];
	if (isUpperCase(elem)) {
		G8.q0(input);
	}else if (isDigit(elem)) {
		G7.q0(input);
	}else if(isSpecialCharacter(elem)) {
		G3.q0(input);
	}else {
		G2.q0(input);
	}
}






















