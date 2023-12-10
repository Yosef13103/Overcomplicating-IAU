#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arrA[size], arrB[size], arrC[size+size]; //arrC is total size of both A and B
	cout << "First: items of array (arrA):" << endl;
	for (int i = 0; i < size; i++) //Inputting values for arrA
	{
		cout << "Enter item " << i << " of (arrA): ";
		cin >> arrA[i];
	}
	
	cout << "Second: items of array (arrB):" << endl;
	for (int i = 0; i < size; i++) //Inputting values for arrB
	{
		cout << "Enter item " << i << " of (arrB): ";
		cin >> arrB[i];
	}
	

	//copying into arrC
	for (int i = 0; i < size; i++) //copying arrA
	{
		arrC[i] = arrA[i];
	}
	
	for (int i = 5; i < 11; i++) //copying arrB
	{
		arrC[i] = arrB[i - size];
	}
	
	//printing out arrC
	cout << "Array arrC items are: " << endl;
	for (int i = 0; i < size+size; i++)
	{
		cout << arrC[i] << endl;
	}
	
	return 0;
}
