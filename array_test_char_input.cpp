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
	int number_element;
	cout << "What element number woudl you liek to display?" << endl;
	cin >> number_element;
	cout << "Element "<< number_element << " of array_alphabet is " << array_alphabets [number_element] << endl;

	}
