//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()		//prime number = number divisible by only itself and 1 
{
	int num, i=2;	 //set i at 2 because all numbers are divisible by 1
	bool prime=1;	 //set it as true to start with, because 2 is prime
	cout << "Enter a number: ";
	cin >> num;
	do 
	{
		if ((num % i) == 0)		//if anywhere within the range (2 to num) mod = 0, then num is divisible by a number other than itself, so prime = false
		{
			prime = 0;		//change prime to false
		}
		i++;		//increment i by 1
	} while(i < num);		//loop until i < num
	if (prime)
	{
		cout << "Is a prime number";
	}
	else 
	{
		cout << "Not a prime number";
	}
	return 0;
}
