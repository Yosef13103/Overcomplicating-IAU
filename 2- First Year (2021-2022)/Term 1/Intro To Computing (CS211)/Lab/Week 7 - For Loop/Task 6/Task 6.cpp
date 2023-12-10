//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, count, sum=0;
	cout << "Enter the first value: ";
	cin >> num1;
	cout << "Enter the second value: ";
	cin >> num2;
	cout << "Enter the number to be divided by: ";
	cin >> num3;
	for (count = num1; count < num2; count++)
	{
		if ((count % num3) == 0) 
		{
			cout << count << " ";
			sum = sum + count;
		}
	}
	cout << endl << "The sum: " << sum;
	return 0;
}
