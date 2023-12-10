//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() 
{
	const int size = 5;
	int arrA[size], arrB[size], arrC[10];
	cout << "please enter array 1" << endl; //arrayA
	for (int i = 0; i < size; i++)
	{
		cin >> arrA[i];
	}
	cout << "please enter array 2" << endl; //arrayB
	for (int i = 0; i < size; i++)
	{
		cin >> arrB[i];
	}
	
	for (int i = 0; i < size; i++)	//arrayC, combining arrayA and arrayB
	{
		arrC[i] = arrA[i];
		arrC[i + size] = arrB[i];
	}
	
	cout << "the value of arrC " << endl; //outputting arrayC
	for (int i = 0; i < 10; i++)
	{
		cout << arrC[i] << ", ";
	}
	
	return 0;
}
