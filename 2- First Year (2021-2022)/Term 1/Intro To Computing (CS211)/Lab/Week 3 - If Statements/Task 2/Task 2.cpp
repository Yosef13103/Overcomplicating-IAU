//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main(void) {
	double Num1, Num2, Answer;
	char Operator;
	cout << "Input first number: ";
	cin >> Num1; 
	cout << "Input second number: ";
	cin >> Num2;
	cout << "Input the operator (+, -, *, /): ";
	cin >> Operator;
	if (Operator == '+') {
		Answer = Num1 + Num2;
	}
	else if (Operator == '-') {
		Answer = Num1 - Num2;
	}
	else if (Operator == '*') {
		Answer = Num1 * Num2;
	}	
	else if (Operator == '/') {
		Answer = Num1 / Num2;
	}	
	else {
		cout << "Please only use (+, -, *, /) for the operators";
		return 0;
	}	
	cout << "Answer is: " << Answer;
	return 0;
}
