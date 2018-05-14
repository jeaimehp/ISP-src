#include<iostream>
using std::cout;
using std::endl;

void swap(int &var_i, int &var_j);

int main ()
	{
	int i = 2;
	int j = 3;
	cout << "i before swap = " << i << " j before swap = " << j << endl;
	swap (i,j);
	cout << "i after swap = " << i << " j after swap = " << j << endl;
	}

void swap(int &var_i, int &var_j)
	{
	int i = var_i;
	int j = var_j;
	var_j = i;
	var_i = j;
	}

