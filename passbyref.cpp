#include<iostream>
using std::cout;
using std::endl;

void f(int &i)
	{
	cout << "i in function before set i= " << i << endl;
	i = 5;
	cout << "i in function after set i= " << i << endl;
	}

int main()
	{
	int var =0;
	cout << "var before funciton call= " << var << endl;
	f(var);
	cout << "var after function call= " << var << endl;
	}	

