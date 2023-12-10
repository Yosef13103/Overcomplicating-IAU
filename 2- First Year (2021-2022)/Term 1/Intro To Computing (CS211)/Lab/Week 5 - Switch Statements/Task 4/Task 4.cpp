//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() 
{
	int number;
	cout << "Input an integer number to check if it is even or odd: ";
	cin >> number;
	switch(number % 2)
	{
		case 0:
			cout << "Number is even";
			break;
		case 1:
			cout << "Number is odd";
			break;
		default: 
			cout << "Number is neither even nor odd";
			break;
	}
	
	return 0;	
}
