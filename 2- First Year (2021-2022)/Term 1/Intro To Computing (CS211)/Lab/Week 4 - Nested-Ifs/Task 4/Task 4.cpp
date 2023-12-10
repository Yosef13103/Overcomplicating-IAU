//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() {
	double weight, length, calories;
	int age;
	char gender;
	
	cout << "Enter your gender (m or f): ";
	cin >> gender;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your weight: ";
	cin >> weight;
	cout << "Enter your height: "; 
	cin >> length;

	if (gender == 'm' || gender  == 'M') {
		calories = ((6.25 * length) + (10 * weight) - (age * 5)) + 5;
		cout << "The amount of calories your body needs is: " << calories << " calories";
	}
	else if (gender == 'f' || gender  == 'F') {
		calories = ((6.25 * length) + (10 * weight) - (age * 5)) - 161;
		cout << "The amount of calories your body needs is: " << calories << " calories";
	}
	else {
		cout << "You did not input a correct gender (m or f)";
	}
	return 0;
}
