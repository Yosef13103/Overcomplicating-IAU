#include<iostream>
#include "even.h"
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: " << endl;
	cin >> num;
	if(even(num))
	{
		cout << "Even number" << endl;
	}
	else
	cout << "Odd number " << endl;
	
	
	return 0;
}
