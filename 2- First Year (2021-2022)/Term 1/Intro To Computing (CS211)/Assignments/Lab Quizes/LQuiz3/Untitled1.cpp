#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	int size, counter = 0;
	cout << "Enter array size: ";
	cin >> size;
	char arrA[size], arrB[size];
	
	cout << "Enter words: ";
	for(int i = 0; i < size; i++)
	{
		cin >> arrA[i];
	}
	
	for(int i = 0; i < size; i++)
	{
		if((arrA[i] >= 65 && arrA[i] <= 90 ))
		{
			arrB[counter] = arrA[i];
			counter++;
		}
	}
	
	cout << "Words after removing digits: ";
	for(int i = 0; i < counter; i++)
	{
		cout << arrB[i];
	}
	
	
	return 0;
}
