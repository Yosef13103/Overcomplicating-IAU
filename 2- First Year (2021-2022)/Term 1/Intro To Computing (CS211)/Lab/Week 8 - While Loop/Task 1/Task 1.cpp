//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()
{

	for (int i = 100; i < 500; i++) //range 100 to 500
	{
		int num = i, sum = 0;
		while (num != 0)		 //loop this until num = 0
		{
			sum += (num % 10)*(num % 10)*(num % 10);	//using mod to get remainder, and summing
			num = num / 10;	//dividing by 10 to move to the next digit
		} 
		if (i == sum) //checking if i equals the sum
		{
			cout << i << endl;
		}
	}
	return 0;
}
