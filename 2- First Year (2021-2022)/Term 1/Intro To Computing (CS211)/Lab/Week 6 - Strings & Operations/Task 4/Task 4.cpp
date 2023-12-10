//Yosef Ahmed 2210009123 3M2
#include <iostream>

using namespace std;

int main()
{
	char department;
	int salary, years, workshops, flag;
	double raise;
	flag = 0;
	cout << "-Enter department (A, B or C): ";
	cin >> department;
	cout << "-Enter employee salary: ";
	cin >> salary;
	if (department == 'A' || department == 'a')
	{
		cout <<"\t -Enter years of experience: ";
		cin >> years;
		if (years > 5)
		{
			raise = 0.025;
		}
		else 
		{
			raise = 0.02;	
		}
	}
	else if (department == 'B' || department == 'b')
	{
		cout <<"\t -Enter number of workshops: ";
		cin >> workshops;
		if (workshops >= 5)
		{
			raise = 0.02;
		}
		else 
		{
			raise = 0.015;
		}	
	}
	else if (department == 'C' || department == 'c')
	{
		raise = 0.01;
	}
	else 
	{
		cout << "You did not input a correct department";
		flag = 1;
	}
	if (flag != 1)
	{
		cout << "The calculated raise is: " << (raise * salary) << " SR"<< endl;
		cout << "Your new salary: " << (salary + (raise * salary)) << " SR";
	}
	return 0;
}
