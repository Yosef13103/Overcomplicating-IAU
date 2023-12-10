//Yosef Ahmed 2210009123 3M2
#include <iostream>

using namespace std;

int main() 
{
	int temp, newtemp;
	char degree;
	cout << "Please enter the temperature and measurement system (c or f): ";
	cin >> temp >> degree;
	if (degree == 'c' || degree == 'C') 
	{
		newtemp = ((temp * (9.0/5.0)) + 32.0);
		cout << newtemp << " degrees Fahrenheit";
	}
	else if (degree == 'f' || degree == 'F') 
	{
		newtemp = ((temp - 32.0) * (5.0/9.0));
		cout << newtemp << " degrees Celsius";
	}
	else 
	{
		cout << "You did not input a correct measurement system for temperature (c or f)";
	}
	return 0;
}
