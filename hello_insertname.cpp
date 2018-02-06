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
	string insert_name = "";
	cout << "Who dares disturb my slumber?";
	cin >> insert_name;
	cout << "Oh, Hello " << insert_name << "!" << endl;
	}
