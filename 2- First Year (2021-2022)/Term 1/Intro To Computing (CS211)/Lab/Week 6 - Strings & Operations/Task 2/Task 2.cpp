//Yosef Ahmed 2210009123 3M2
#include <iostream>

using namespace std;

int main()
{
	char first, middle, surname;
	cout << "PLease enter your first name: ";
	first = cin.get();
	cin.ignore(25, '\n');
	cout << "PLease enter your middle name: ";
	middle = cin.get();
	cin.ignore(25, '\n');
	cout << "PLease enter your surname name: ";	
	surname = cin.get();
	cout << "Your initials: " << first << middle << surname;
	
	return 0;

}
