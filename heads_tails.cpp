/*
 * Author: Jeaime Powell
 * Program Name: Heads or Tails
 * Program Function: Accepts a int and randomly generate a number and tell if it is head or tails and how many times
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
	int number_of_times = 1000000;
	int heads = 0;
	int tails = 0;
	cout << "Flipping the coin " << number_of_times << " times!" << endl;
	for (int i = 0; i < number_of_times; i++) {	
		int random_number = rand();
		if (random_number%2 == 0) {
			heads++;
		}
		else {
			tails++;
		}
	}
	cout << "There were " << heads << " Heads" << endl; 
	cout << "There were " << tails << " Tails" << endl; 
}

	


