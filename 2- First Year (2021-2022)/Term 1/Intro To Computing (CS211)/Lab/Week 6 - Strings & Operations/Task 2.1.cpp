//Another possible method of doing task 2 lab5
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first, middle, surname;
	cout << "PLease enter your first name: ";
	getline(cin, first);
	cout << "PLease enter your middle name: ";
	getline(cin, middle);
	cout << "PLease enter your surname: ";
	getline(cin, surname);
	cout << "Your initials: " << first[0] << middle[0] << surname[0];
	
	return 0;
}
