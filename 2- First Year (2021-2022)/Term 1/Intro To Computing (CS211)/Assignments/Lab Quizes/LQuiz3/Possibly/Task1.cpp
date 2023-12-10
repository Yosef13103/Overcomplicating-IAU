#include <iostream>
using namespace std;
int main()
{
	int size, result, multiplier;
	
	cout << "Enter the array size: "; 
	cin >> size;
	int num[size]; //declared the array after size as to not cause a memory error
	cout << "Enter " << size << " integers: "; 

	for(int i = 0; i < size; i++)	//inputting values in the array
	{
		cin >> num[i];
	}
	
	cout << "Enter the multiplier: ";
	cin >> multiplier;
	
	cout << "The result of multiplying even numbers in " << multiplier << " are:" << endl;
	for(int i = 0; i < size; i++) //multiplying each integer in the array by the multiplier
	{
		if((num[i] % 2) == 0)
		{
			result = num[i] * multiplier;
    		cout << result << " ";
		}
	}
	return 0;
}
