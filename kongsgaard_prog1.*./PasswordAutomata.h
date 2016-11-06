#ifndef _PASSWORD_H
#define _PASSWORD_H
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
class Graph1{

//		the ascii values 
//  digits 48-57
//  lower characters 97-122		
//  upper case character 65 - 90
//	special characters 33-46 and 58-64 and 91-96 and 123-126	
	
	public:
		int digitStart = 48;
		int digitEnd = 57;

		int upperStart = 65;
		int upperEnd = 90;
		
		int specialStart1 = 97;
		int specialEnd1 = 122;
		
		int specialStart2 = 33;
		int specialEnd2 = 46;

		int specialStart3 = 58;
		int specialEnd3 = 64;

		int specialStart4 = 91;
		int specialEnd4 =	96;

		int specialStart5 = 123;
		int specialEnd5 = 126;

		bool isDigit(int);
		bool isUpperCase(int);
		bool isSpecialCharacter(int);
		bool validLength(int);
		void q0(string input);
		void q1(string input);
		void q2(string input);
		void q3(string input);
		void q4(string input);
};
#endif