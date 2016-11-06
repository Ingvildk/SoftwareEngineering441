#include "PasswordAutomata.h"
#include <string>
#include <iostream>

#include <string>
#include <iostream>
#include "Graph2.h"
#include "Graph3.h"
#include "Graph4.h"
#include "Graph5.h"
#include "Graph6.h"
#include "Graph7.h"
#include "Graph8.h"
#include "Graph9.h"
#include "Graph10.h"
#include "Graph11.h"
#include "Graph12.h"
#include "Graph13.h"
#include "Graph14.h"
#include "Graph15.h"
#include "Graph16.h"
#include "Graph17.h"
#include "Graph18.h"
#include "Graph19.h"

using namespace std;



void Graph2::q0(string input) {
cout << "Graph2 q0" << endl;
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
		G8.q1(input);
	}else if (G1.isDigit(elem)) {
		G7.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G3.q1(input);
	}else {
		G2.q1(input);
	}
}

void Graph2::q1(string input) {
	cout << "Graph2 q1" << endl;
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
		G8.q2(input);
	}else if (G1.isDigit(elem)) {
		G7.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G3.q2(input);
	}else {
		G2.q2(input);
	}
}
	
void Graph2::q2(string input){
	cout << "Graph2 q2" << endl;	
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
		G8.q3(input);
	}else if (G1.isDigit(elem)) {
		G7.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G3.q3(input);
	}else {
		G2.q3(input);
	}	
}


// TRAP STATE
void Graph2::q3(string input) {
	cout << "Graph2 q3" << endl;
	cout << "Error Not a Valid Password" << endl;
	return;
}








