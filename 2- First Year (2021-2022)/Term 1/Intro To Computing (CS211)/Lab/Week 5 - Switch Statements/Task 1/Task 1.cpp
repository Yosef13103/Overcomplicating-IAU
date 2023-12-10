//Yosef Ahmed 2210009123 3M2
#include <iostream>

using namespace std;

int main() 
{
	double Num1, Num2, Answer;
	char Operator;
	cout << "Enter a value: ";
	cin >> Num1;
	cout << "Enter b value: ";
	cin >> Num2;
	cout << "Enter operation (+, -, *, /): ";
	cin >> Operator;

	switch (Operator) 
	
	case '+':
		Answer = Num1 + Num2;
		cout << "The result = " << Answer;	
		break;
	case '-':
		Answer = Num1 - Num2;
		cout << "The result = " << Answer;
		break;
		
	case '*':
		Answer = Num1 * Num2;
		cout << "The result = " << Answer;
		break;
	case '/':
		if (Num2 != 0 ) 
		{
			Answer = Num1 / Num2;
			cout << "The result = " << Answer;
		}
		else 
		{
			cout << "Can not divide by zero!";
		}
		break;
	default:
		cout << "Entered wrong input";
	}
	return 0;
}

