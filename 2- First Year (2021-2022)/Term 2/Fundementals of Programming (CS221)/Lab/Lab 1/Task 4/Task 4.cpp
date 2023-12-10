#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter your original array size: ";
	cin >> size;
	int arr[size], arrRev[size];
	
	cout << "Enter original array items:" << endl;
	for (int i = 0; i < size; i++) //Inputting values for arr
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < size; i++) //Reversing the values
	{
		arrRev[(size-1)-i] = arr[i];
	}
	
	cout << "Index  Original Array  Reversed Array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << "\t" << arr[i] << "\t\t" << arrRev[i] << endl;
	}
	
	return 0;
}
