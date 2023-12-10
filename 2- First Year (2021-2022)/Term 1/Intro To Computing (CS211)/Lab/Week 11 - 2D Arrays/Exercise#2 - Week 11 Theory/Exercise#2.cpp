//program that reads array of size n, then copies the array under the condition of: only values that either 
//their index is divisible by 3 
//or
//their own cell value is divisible by 5
//n = 8

#include <iostream>
using namespace std;

int main()
{
	const int size=8;
	int array1[size], array2[size], j=0; //j is counter for the new array
	cout << "enter values" << endl;
	for (int i = 0; i < size; i++) 	//entering values in array1
	{
		cin >> array1[i];
	}
	
	
	for (int i = 0; i < size; i++) //copying
	{
		if (((i % 3) == 0) || ((array1[i] % 5) == 0)) //making sure it satisfies conditions
		{
			array2[j] = array1[i];
			j++; //incrementing only if condition was satisfied and the number was copied to new array
		}
	}
	
	
	for (int i = 0; i < j; i++) //printing
	{
		cout << array2[i] << " ";
	}
	
	return 0;
}
