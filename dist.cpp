#include<iostream>
#include<math.h>
using std::cout;
using std::endl;

int main() {
float x1 = 3.0;
float y1 = 4.0;
float x2 = 2.0;
float y2 = 2.0;
float dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
cout << dist << endl;
}
