#include<iostream>
#include<math.h>

using std::cout;
using std::endl;

int recurse_sum_squares (int i)
	{
	int fib;
	if (i == 0){
	cout << 1 << "Done" << endl;
	return 1;
	}
	if (i == 1){
	cout << 1 << ",";
        return 0;
        }
	else{
	int fib;
	fib = (i-1) + (i-2);
	cout << fib << ",";
	return recurse_sum_squares (i-1);
	}
	}

int main () 
	{
	int start_num =25;
	cout << recurse_sum_squares(start_num);
	}	
