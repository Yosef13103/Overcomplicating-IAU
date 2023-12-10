#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter your original array size: ";
	cin >> size;
	int orig[size], rev[size];
	cout << "Enter original array items: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> orig[i];
	}
	
	cout << "Your array items are: " << endl;
	for (int i = size; i > 0; i--) //printing from last value to first value (index 3 to 0)
	{
		cout << orig[i-1] << " ";
	}

	return 0;
}
