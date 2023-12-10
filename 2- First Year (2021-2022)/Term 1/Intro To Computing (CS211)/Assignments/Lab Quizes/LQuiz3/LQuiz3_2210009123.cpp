#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int size;
	cout << "Enter array size:" << endl;
	cin >> size;	//declaring array size before array to not cause a memory error
	char arr1[size], arr2[size];
	
	int j = 0;
	cout << "Enter a word: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr1[i];
		if ((arr1[i] >= 65) && (arr1[i] <= 90))
		{
			arr2[j] = arr1[i];
			j++;
		}
	}
	cout << "Word after removing digits, symbols and special character is: " << arr2 << endl;
	
	return 0;
}
