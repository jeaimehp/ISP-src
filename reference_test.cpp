#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
   int variable_a = 1100;

   cout <<"variable = " << variable_a << endl;
   int &variable = variable_a; 

   cout <<"variable memory reference = " << variable << endl;

   variable = 42;

   cout << "let's look at the variable_a = " << variable_a << endl;
   
   variable_a = 21;
   cout <<"variable memory reference = " << variable << endl;
	
}
