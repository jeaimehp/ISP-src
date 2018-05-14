#include <iostream>
using std::cout;
using std::endl;


void hello();
void hello_again();

int main() 
{
	hello();
	}
void hello() 
{
	cout << "Hello World" << endl;
	hello_again();
}

void hello_again()
{
        cout << "I'm back" << endl;
}
