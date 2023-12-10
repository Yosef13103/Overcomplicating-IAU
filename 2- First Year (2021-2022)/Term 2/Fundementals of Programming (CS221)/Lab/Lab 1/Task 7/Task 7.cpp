#include <iostream>
#include <string>
using namespace std;

int main()
{
	int rainfall[4][7], sum=0;
	double avg;
	cout << "Please enter the rainfall rate for 4 weeks" << endl;
	for (int weeks = 0; weeks < 4; weeks++)
	{
		cout << "Week#" << weeks+1 << "   ";
		for (int days = 0; days < 7; days++)
		{	
			cin >> rainfall[weeks][days];
		}
	}
	
	cout << endl << "Classification for each week:" << endl;
	for (int weeks = 0; weeks < 4; weeks++)
	{
		for (int days = 0; days < 7; days++)
		{	
			sum = sum + rainfall[weeks][days];
		}
		avg = (sum*1.0)/7;
		cout << "Week#" << weeks+1 << ":";
		if (avg <= 3)
		{
			cout << " Low (" << avg << ")" << endl;
		}
		if (avg < 6 && avg > 3)
		{
			cout << " Medium (" << avg << ")" << endl;
		}
		if (avg >= 6)
		{
			cout << " High (" << avg << ")" << endl;
		}		
		sum = 0;
	}
	
	return 0;
}
