#include <iostream>
#include <string>
using namespace std;

int main()
{
	string number, extension;
	cout << "Enter your Phone number: ";
	getline(cin, number);
	extension = number.substr(0, 5); //x.substr(pos, no.)
	if (extension == "00966")
	{
		cout << "Country: Saudi Arabia";
	}
	if (extension == "00926")
	{
		cout << "Country: Jordan";
	}
	if (extension == "00971")
	{
		cout << "Country: United Arab Emirates";
	}
	else 
	{
		cout << "Extension does not exist." << endl;
	}
	return 0;
}

