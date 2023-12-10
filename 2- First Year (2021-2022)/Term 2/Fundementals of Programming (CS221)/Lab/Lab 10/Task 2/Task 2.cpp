#include <iostream>
using namespace std;

int main()
{
	int x=2, y=8;
	int *p = &x;
	int *q = &y;
	cout << "Address of x: " << &x << ", Value x: " << x << endl;
	cout << "Value of p: " << p << ", Value *p: " << *p << endl;
	cout << "Address of y: " << &y << ", Value y: " << y << endl;
	cout << "Value of q: " << q << ", Value *q: " << *q << endl;
	cout << "Address of p: " << &p << endl;
	cout << "Address of q: " << &q << endl;

	return 0;

}