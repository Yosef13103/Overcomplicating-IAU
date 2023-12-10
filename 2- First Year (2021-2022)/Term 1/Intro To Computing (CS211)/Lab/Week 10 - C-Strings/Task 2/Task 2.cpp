#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first, middle, last, age, password = "";
	cout << "First Name: ";
	getline(cin, first);
	cout << "Middle Name: ";
	getline(cin, middle);
	cout << "Last Name: ";
	getline(cin, last);
	cout << "Age: ";
	getline(cin, age);
	
	password += first.at(first.length()/2); //add to password, dont reassign to it.
	password += middle.at(middle.length()/2);
	password = password + last;
	password = password + age;
	cout << "Password: " << password;
	
	return 0;
}
