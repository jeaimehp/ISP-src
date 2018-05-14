#include<iostream>

using std::cout;
using std::endl;

int recurse_sum (int i)
	{
	if (i == 0){
	return 0;
	}
	return i + recurse_sum (i-1);
	}

int main () 
	{
	int start_num =100;
	cout << recurse_sum(start_num) << endl;
	}	
