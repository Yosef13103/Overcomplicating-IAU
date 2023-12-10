//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()
{
	int count, sum=0;
	cout << "Numbers between 100 and 200, divisible by 9:" << endl;
	for (count = 100; count <= 200; count++)
	{
		if ((count % 9) == 0) 
		{
			cout << count << " ";
			sum = sum + count;
		}
	}
	cout << endl << "The sum: " << sum;
	return 0;
}
