//Yosef Ahmed 2210009123 3M2
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, ID;
	cout << "Please enter your ID: ";
	getline(cin, ID);
	cout << "Please enter your full name: ";
	getline(cin.ignore(-25, ' '), name);
	cout << "Your password: " << name << "_" << ID;
	
	return 0;
}
