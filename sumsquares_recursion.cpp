#include<iostream>
#include<math.h>

using std::cout;
using std::endl;

int recurse_sum_squares (int i)
	{
	if (i == 1){
	return 1;
	}
	return i*i + recurse_sum_squares (i-1);
	}

int main () 
	{
	int start_num =100;
	cout << recurse_sum_squares(start_num) << endl;
	}	
