//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()
{
	int num, count, sum=0, odd=1; //start odd at 1, because 1 is the first odd natural number
	cout << "Input number of terms: ";
	cin >> num;
	if (num > 0)
	{
		cout << "The odd numbers are: ";
		for (count = 1; count <= num; count++)
		{
			cout << odd << " ";
			sum = sum + odd; //adding odd values together
			odd += 2; //increment odd by 2 (to move onto the next odd number)
			
			/* //alternative method:
			odd = (count * 2) - 1;
			cout << odd << " ";
			sum = sum + odd	*/
		}
		cout << endl << "The Sum of odd Natural Numbers up to 5 terms: " << sum;
	}
	else 
	{
		cout << "Only positive integer number of terms are allowed";
	}
	return 0;
}
