#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char first[20], second[20], last[20], capital[60] = "";
	cout << "Enter First name: ";
	cin.getline(first, 19);
	cout << "Enter Second name: ";
	cin.getline(second, 19);
	cout << "Enter Last Name: ";
	cin.getline(last, 19);
	
	strcat(capital, first); //combining name to single cstring
	strcat(capital, " ");
	strcat(capital, second);
	strcat(capital, " ");
	strcat(capital, last);
	
	for (int i = 0; i < strlen(capital); i++)
	{
		capital[i] = toupper(capital[i]);
	}
	cout << "Full Name in capital letter is: " << capital;
	return 0;
}
