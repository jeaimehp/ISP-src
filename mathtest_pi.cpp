/*
 * Program Author: Jeaime Powell
 *Program Name: Math Test
 *Program Function: Performs standard math functions
 *Created: 2018-01-31
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>

//allows setprecision
#include <iomanip>
using std::setprecision;

int main () {
	int pi_integer = atan(1)*4;
	float pi_float = atan(1)*4;
	double pi_double = atan(1)*4;
	cout << endl;
	cout << "Pi as an integer (size in bytes " << sizeof(int)<< ") " << pi_integer << endl;
	cout << "Pi as an float   (size in bytes " << sizeof(float)<< ") " << setprecision(200) << pi_float << endl;
	cout << "Pi as an double  (size in bytes " << sizeof(double)<< ") " << setprecision(200) <<pi_double << endl;
	cout << endl;
	}
