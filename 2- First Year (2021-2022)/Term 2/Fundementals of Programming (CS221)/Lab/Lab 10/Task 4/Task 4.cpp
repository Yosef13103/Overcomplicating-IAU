#include <iostream>
using namespace std;

void updateValue1Ref(int& a, int& b); //1 by ref
void updateValue2Ref(int& a, int& b); //2 by ref
void updateValue1Point(int* a, int* b); //1 by pointer
void updateValue2Point(int* a, int* b); //2 by pointer

int main()
{
	int x, y;
	cout << "Enter 2 numbers: ";
	cin >> x >> y;

	cout << "BY REF:" << endl;
	updateValue1Ref(x, y);
	cout << x << " " << y << endl;
	updateValue2Ref(x, y);
	cout << x << " " << y << endl;
/*
	cout << "BY POINTER:" << endl;
	updateValue1Point(&x, &y);
	cout << x << " " << y << endl;
	updateValue2Point(&x, &y);
	cout << x << " " << y << endl;
*/
	return 0;

}

//reference
void updateValue1Ref(int& a, int& b)
{
	a -= 10;
	b += 50;
}

void updateValue2Ref(int& a, int& b)
{
	a *= 2;
	b /= 10;
}


//pointers
void updateValue1Point(int* a, int* b)
{
	*a *= 10;
	*b += 50;
}

void updateValue2Point(int* a, int* b)
{
	*a *= 2;
	*b /= 10;
}