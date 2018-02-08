/*
 * Author: Jeaime Powell
 * Program Name: Even or Odd
 * Program Function: randomly generate a number and tell if it is even of odd
 * Creation Date: 2018-02-08
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//The time.h header file allow the srand to generate a new seed based on the "time" function
#include <time.h> 

int main () {
	srand (time(NULL));
	int rand();
	int random_number = rand();
	cout << "The random number is " << random_number << endl;
	if (random_number%2 == 0) {
	cout << "The number is even" << endl;
	}
	else {
	cout << "The number is odd" << endl;
	}
}
	


