#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arrA[size], arrB[size], arrC[size], sum=0; 
	cout << "First: items of array (arrA):" << endl;
	for (int i = 0; i < size; i++) //Inputting values for arrA
	{
		cout << "item#" << i << ": ";
		cin >> arrA[i];
	}
	
	cout << "Second: items of array (arrB):" << endl;
	for (int i = 0; i < size; i++) //Inputting values for arrB
	{
		cout << "item #" << i << ": ";
		cin >> arrB[i];
	}
	
	cout << "Resulting Array items (arrC = arrA + arrB) are:" << endl;
	for (int i = 0; i < size; i++)
	{
		sum = arrA[i] + arrB[i];
		arrC[i] = sum;
		cout << arrC[i] << endl;
		sum = 0;
	}
	
	return 0;
}
