#include <iostream>
using namespace std;

void swapR(int &num1, int &num2) //swap by reference
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

}

void swapV(int num1, int num2) //swap by value
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int num1, num2;
	cout << "Please enter two numbers:" << endl;
	cin >> num1;
	cin >> num2;
	
	cout << "The two numbers before any call: num1: = " << num1 << " num2: = " << num2 << endl;
	swapV(num1, num2);
	cout << "The two numbers after swapV: num1: = " << num1 << " num2: = " << num2 << endl;
	swapR(num1, num2);
	cout << "The two numbers after swapR: num1: = " << num1 << " num2: = " << num2 << endl;
	
	return 0;
}
