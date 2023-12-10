#include <iostream>
#include <string>
using namespace std;

int main()
{
	string original, toggled;
	cout << "Enter String to toggle: ";
	getline(cin, original);
	cout << "The toggled string: ";
	for (int i = 0; i < original.length(); i++)
	{
		if (islower(original[i])) //checking if value is lower case
		{
			toggled[i] = toupper(original[i]); //converting to upper case
		}
		if (isupper(original[i])) //checking if value is upper case
		{
			toggled[i] = tolower(original[i]); //converting to lower case
		}
		cout << toggled[i];		
	}
	return 0;
}
