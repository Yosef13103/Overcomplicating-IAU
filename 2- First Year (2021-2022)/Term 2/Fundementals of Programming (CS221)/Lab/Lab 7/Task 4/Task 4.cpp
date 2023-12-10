#include <iostream>
using namespace std;

void numberFunction(int i)
{
	cout << "The number is: " << i << endl;
	if (i == 9)
	{
		return;
	}
	else 
	{
		numberFunction(i+1);
	}
}

int main()
{
	numberFunction(0);
	
	return 0;
}
