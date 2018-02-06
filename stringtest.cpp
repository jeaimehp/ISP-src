/*
 * Program Author: Jeaime Powell
 *Program Name: Hello World
 *Program Function: Print "Hello World on the Screen"
 *Created: 2018-01-31
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main () {
	string mystring = "";
	cout << "Who dared distrub my slumber?";
	cin >> mystring;
	cout << "Oh, Hello " << mystring << "!" << endl;
	cout << "String value @ 3 =" << mystring[3] << endl;
	}
