#include<iostream>
#include<math.h>
using std::cout;
using std::endl;

struct coords {float x; float y;};


int main() {

coords c1,c2;
c1.x = 3.;
c1.y = 4.;
c2.x = 2.;
c2.y = 2.;
float dist = sqrt(pow(c2.x-c1.x,2)+pow(c2.y-c1.y,2));
cout << dist << endl;
}
