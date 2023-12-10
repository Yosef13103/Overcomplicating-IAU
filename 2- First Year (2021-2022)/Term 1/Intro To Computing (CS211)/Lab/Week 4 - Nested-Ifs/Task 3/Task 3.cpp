//Yosef Ahmed 2210009123 3M2
#include <iostream>

using namespace std;

int main() {	
	int score1, score2, score3, average;
	cout << "Input score 1: ";
	cin >> score1;
	cout << "Input score 2: ";
	cin >> score2;
	cout << "Input score 3: ";
	cin >> score3;	
	if (score1 >= 0 && score1 <= 100 && score2 >= 0 && score2 <= 100 && score3 >= 0 && score3 <= 100)  //Range check
	{
		average = (score1 + score2 + score3)/3;
		if (average >= 90 && average <= 100) 
		{
			cout << "Grade A";
		}
		else if (average >= 70 && average <= 89) 
		{
			cout << "Grade B";
		}
		else if (average >= 50 && average <= 69) 
		{ 
			cout << "Grade C";
		}
		else if (average < 50) 
		{
			cout << "Grade F";
		}
	}
	else 
	{
		cout << "One of the inputed scores falls outside the allowed range (0 to 100).";
	}
		return 0;
	}
