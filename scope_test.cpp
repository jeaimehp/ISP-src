#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
float i = 1.5; //i is a local variable to main
for (int i = 0; i < 5; i++) { //i is a local variable to the for loop
	cout << "The index i = " << i << endl;
	}
cout << "The variable i in main is = " << i << endl;
}

