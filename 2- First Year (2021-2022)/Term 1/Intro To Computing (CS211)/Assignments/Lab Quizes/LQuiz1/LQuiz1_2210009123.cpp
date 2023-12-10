//2210009123 - Yosef Ahmed - 3M2
#include <iostream>
using namespace std;

int main()
{
	double price, power, bill=0; //double to allow decimals 
	cout << "Enter the power consuption: ";
	cin >> power;
	if (power >= 0 && power <= 1000) //between 0 and 1000
	{
		price = 0.50;
	}
	else if (power >= 1001 && power <= 10000) //between 1001 and 10000
	{
		price = 1.00;
	}
	else if (power >= 10001 && power <= 20000) //between 10001 and 20000
	{
		price = 1.50;
	}
	else if (power >= 20001) //more than 20001
	{
		price = 2.00;
	}	
	else 
	{
		cout << "Power consuption must be a positive number"; //error message in case user inputs negative number
		return 0;
	}
	
	bill = power*price*1.15; //1.15 is adding the vat charge of 0.15 (15%)
	
	cout << "The total bill is: " << bill << " SAR" << endl;
	
	return 0;
}
