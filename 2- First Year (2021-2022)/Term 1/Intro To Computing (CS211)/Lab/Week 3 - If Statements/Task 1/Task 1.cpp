//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() {
	double num1, num2, num3, max;
	cout << "Input first number: ";
	cin >> num1;
	cout << "Input second number: ";
	cin >> num2;
	cout << "Input third number: ";
	cin >> num3;
	max = num1;
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	cout << "The biggest number is: " << max;
	return 0;
}
