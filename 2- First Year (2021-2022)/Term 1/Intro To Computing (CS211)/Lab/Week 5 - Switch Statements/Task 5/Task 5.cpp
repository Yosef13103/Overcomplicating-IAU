//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() 
{
	double monthly, rewards, points, flag;
	char membership;
	flag = 0;
	cout << "Enter membership type:\n\"1\" for Standard \n\"2\" for Plus \n\"3\" for Premium" << endl;
	cin >> membership;
	cout << "Enter monthly purchases ($): ";
	cin >> monthly;
	switch(membership) 
	{
		case '1':
			if (monthly < 75.0) 
			{
				rewards = 0.05;
			}
			else if (monthly >= 75.0 && monthly < 150.0)
			{
				rewards = 0.075;
			}
			else if (monthly >= 150.0)
			{
				rewards = 0.10;
			}
			break;
		case '2':
			if (monthly < 150.0)
			{
				rewards = 0.06;
			}
			else if (monthly >= 150.0)
			{
				rewards = 0.13;
			}
			break;
		case '3':
			if (monthly > 200.0)
			{
				rewards = 0.04;
			}
			else if (monthly <= 200)
			{
				rewards = 0.15;
			}
			break;
		default:
			cout << "You entered an incorrect membership type";
			flag = 1;
	}	
	if (flag != 1) 
	{
		points = monthly * rewards;
		cout << "Your reward points are " << points;
		return 0;
	}
}
