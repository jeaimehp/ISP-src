/*
 * Program Author: Jeaime Powell
 * Program Name: Solve for Y
 * Program Function: Solves for Y in y = mx+b
 * Created: 2018-01-31
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

float eq_line (int x, float m, int b);

int main () 
	{
	int point_x, yintercept_b;
	float slope_m, point_y;
	cout << "This program solves for y in the equation y = mx+b" << endl;
	cout << "What is the value of m (slope)?" << endl;
	cin >> slope_m;
	cout << "What is the value of x?" << endl;
	cin >> point_x;
	cout << "What is the value of b (y-axis intercept)?" << endl;
	cin >> yintercept_b;
	//point_y = slope_m * point_x + yintercept_b;
	point_y = eq_line(point_x, slope_m, yintercept_b);
	cout << "y = mx + b is:" << endl;
	cout << point_y << " = (" << slope_m << "*" << point_x << ") + " << yintercept_b << endl;
	}	

float eq_line (int x, float m, int b)
	{
	cout << "Entered the function eq_line" << endl;
	float y;
	y = m * x + b;
	return y;
	}
	
 
