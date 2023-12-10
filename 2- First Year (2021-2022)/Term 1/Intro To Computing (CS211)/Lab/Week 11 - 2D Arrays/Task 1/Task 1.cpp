#include <iostream>
using namespace std;

int main()
{
	double rates[4][7], sum, avg;
	
	for (int i = 0; i < 4; i++) //weeks
	{
		sum = 0;
		avg = 0;
		cout << "Enter rainfall rate for Week #" << i+1 << endl;
		for (int j = 0; j < 7; j++) //days
		{
			cin >> rates[i][j];
			sum = sum + rates[i][j];
		}
		avg = sum / 7.0;
		cout << "Classification for the week:" << endl;
		if (avg <= 3.0)
		{
			cout << "Week #" << i + 1 << ": Low " ;
		}
		else if ((avg > 3.0) && (avg < 6.0))
		{
			cout << "Week #" << i + 1 << ": Medium ";
		}
		else if (avg >= 6.0)
		{
			cout << "Week #" << i + 1 << ": High ";
		}
		cout << "(" << avg << ")\n\n";
	}

	
	return 0;
}
