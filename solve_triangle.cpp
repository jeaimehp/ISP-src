#include<iostream>
#include<math.h>
using std::cin;
using std::cout;
using std::endl;

float hypotenuse_solve (int a, int b);
float t1st_angle(int opp, float hyp);
float t2nd_angle(float t1st_angle);

int main () 
{
	int side_a;
	int side_b;
	float hypotenuse;
	float theta_1;
	float theta_2;
	cout << "Enter side a value" << endl;
	cin >> 	side_a;
 	cout << "Enter side b value" << endl;
        cin >>  side_b;
	hypotenuse = hypotenuse_solve(side_a, side_b);
	theta_1 = t1st_angle(side_a, hypotenuse);
	theta_2 = t2nd_angle(theta_1);
	cout << "With a side a of " << side_a << " and a side b of " << side_b << endl;
	cout << "The hypotenuse is = " << hypotenuse << endl;
	cout << "The angle 1 is = " << theta_1 << " degrees" << endl;
	cout << "The angle 2 is = " << theta_2 << " degrees" << endl;
	return 0;
}

float hypotenuse_solve (int a, int b)
{
	float hypo;
	hypo = sqrt(pow(a,2)+pow(b,2));
	return hypo;
}

float t1st_angle(int opp, float hyp)
{
	float theta;
	theta = (asin(opp/hyp))*(180/acos(-1.0));
	return theta;
}

float t2nd_angle(float t1st_angle)
{
	float theta;
	theta = 180 - (90.0 + t1st_angle);
	return theta;
}
