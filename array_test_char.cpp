/*
 * Program Author: Jeaime Powell
 *Program Name: Array char example
 *Program Function: Print Creates and prints the output of a char array
 *Created: 2018-02-07
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main () {
	char array_alphabets [26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	cout << "First Element = " << array_alphabets [0] << endl;
	cout << "Second Element = " << array_alphabets [1] << endl;
	cout << "Third Element = " << array_alphabets [2] << endl;
	cout << "Fourth Element = " << array_alphabets [3] << endl;
	cout << "Fifth Element = " << array_alphabets [4] << endl;
	cout << "25th Element = " << array_alphabets [25] << endl;

	}
