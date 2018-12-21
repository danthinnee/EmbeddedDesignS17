#include <iostream>

using namespace std;

int main()
{
	int *x, *y, z[5] = {15,23,37,41,52};
	y = &z[2];
	x = &z[2];
	cout << *y++ << endl;
	cout << *y << endl;
	cout << *x+1 << endl;
	cout << *x << endl;
	cout << *y << endl;
	*(y++);
	cout << *y << endl;
	//cout << *y++ << endl;
	*(++y);
	cout << *y << endl;

	int i=5;
	cout << i << endl;
	cout << i++ << endl;
	cout << i << endl;
	cout << ++i << endl;
	cout << i << endl;
}
