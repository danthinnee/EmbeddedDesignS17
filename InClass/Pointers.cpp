#include <iostream>
using namespace std;

int main() {

	int x;
	cout << "x = " << x << endl;
	x = 5;
	cout << "x=5. x = " << x << endl;
        int *y;
	cout << "int *y. y = " << y << endl;
	y = NULL;
	cout << "y=NULL. y = " << y << endl;
	y = &x;
	cout << "y=&x. y = " << y << endl;
	cout << "*y = " << *y << endl;
	*y = 15;
	cout << "*y=15. *y = " << *y << endl;
	cout << "x = " << x << endl;
	//cout << "*x = " << *x << endl;
	// z is an array
	int z[5] = {12,44,17,22,34};
	// k is a pointer
	int *k;
	int *l = new int[5];
	// 
	k = z;
	l = &z[0];
	cout << "int z[5]={12,44,17,22,34}. z[0] = " << z[0] << endl;
	cout << "int *k; k=z. k[0] = " << k[0] << endl;
	cout << "int *l; l=&z[0]. l[0] = " << l[0] << endl;
	cout << "*k = " << *k << endl;
	cout << "*z = " << *z << endl;
	cout << "*l = " << *l << endl;
	cout << "z[1] = " << z[1] << endl;
        cout << "k[1] = " << k[1] << endl;
	cout << "l[1] = " << l[1] << endl;
        cout << "*(k+1) = " << *(k+1) << endl;
        cout << "*(z+1) = " << *(z+1) << endl;
	cout << "*(l+1) = " << *(l+1) << endl;
	cout << "*k++ = " << *k++ << endl;
        cout << "*z++ = " << "CANNOT ACCESS-Z NOT A POINTER" << endl;
        cout << "*l++ = " << *l++ << endl;


}
