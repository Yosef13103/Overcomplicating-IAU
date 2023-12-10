#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int size=30;
	char str[size], reverse[size];
	cout << "Enter a string: ";
	cin.get(str, 30);
	for (int i = 0; i < (strlen(str)); i++)
	{
		reverse[i] = str[strlen(str) - 1 - i];
	}
	cout << "Reverse string: " << reverse;
	
	return 0;
}
