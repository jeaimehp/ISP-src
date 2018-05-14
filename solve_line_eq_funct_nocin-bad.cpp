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
        int point_x = 2, yintercept_b = 1;
        float slope_m = .3, point_y;
        point_y = eq_line(point_x, slope_m, yintercept_b);
        cout << point_y << " = (" << slope_m << "*" << point_x << ") + " << yintercept_b << endl;
        return 1;
	}
float eq_line (int x, float m, int b)
        {
        float y;
        y = m * x + b;
        return y;
        }

	
 
