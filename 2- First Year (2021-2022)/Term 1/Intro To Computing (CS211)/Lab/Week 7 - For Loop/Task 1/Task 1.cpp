//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()
{
	int num, count, fact=1;
	cout << "Enter a positive integer: ";
	cin >> num;
	if (num >= 0)
	{
		//start count at 1, until count <= number of terms, after the statement: increment count by 1 (to loop statement)
		for (count = 1; count <= num; count++)
		{
			fact = fact * count;
		}
		cout << "Factorial of " << num << " = " << fact;
	}
	else 
	{
		cout << "You did not input a positive integer";
	}
	return 0;
}
