/* Hello World Program*/

#include <iostream>
using namespace std;

int main() {
   cout << "Hello World!" << endl;
   int x = 1;
   //int &y;
   int *ip;
   int z[4] = {0,100,2,3};
   int &y = x;
  // int q = *ip;
   ip = &x;
   x = 100;
   int q = *ip;
   q = 800;
   *ip = 200;
   y = 500;
   cout << "x = " << x << endl;
   cout << "&x = " << &x << endl;
//   cout << "*x = " << *x << endl;
   cout << "ip = " << ip << endl;
   cout << "&ip = " << &ip << endl;
   cout << "*ip = " << *ip << endl;
   cout << "y = " << y << endl;
   cout << "&y = " << &y << endl;
   cout << "q = " << q << endl;
   cout << "&q = " << &q << endl;
   cout << endl << "*z = " << *z << endl;
   cout << "&z = " << &z << endl;
   cout << "*(z+1) = " << *(z+1) << endl;
   //cout << "&(z+1)" << &(z+1) << endl;
   cout << "*z = " << *z << endl;
}
