#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int i=0;
   cout << i << endl;
   {
      cout << i << endl;  // previous scope
      int i=2;
      cout << i << endl;  // current scope
      {
         i=3;
         cout << i << endl; //previous scope
      }
      cout << i << endl;
  
   }
   cout << i << endl; // ???
}
