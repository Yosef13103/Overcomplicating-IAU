/*
Yosef Ahmed - 2210009123 - 3M2
CS211 Introduction to Computing - Assignment 
Question 2
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string password; 
	char operation;
	int key;
	cout << "Enter string: ";
	getline(cin, password);
	while (true) //looping until operation is either + or -
	{
		cout << "Enter operation (+ or -): ";
		cin >> operation;
		if (operation == '-' || operation == '+')
		{
			break;
		}
		else
		{
			cout << "Please enter a suitable operation (+ or -)" << endl;
		}
	}
	cout << "Enter number of the Encrypt key: ";
	cin >> key;
	
	//encrypting
	if (operation == '+')  //succeeding character
	{
		for (int i = 0; i < password.length(); i++)
		{
			if (islower(password[i]))
			{
				password[i] = toupper(password[i]);
			}
			else if (isupper(password[i]))
			{
				password[i] = tolower(password[i]);
			}
			password[i] = password[i] + key;
		}
	}
	if (operation == '-') //preceding character
	{
		for (int i = 0; i < password.length() ; i++)
		{
			if (islower(password[i]))
			{
				password[i] = toupper(password[i]);
			}
			else if (isupper(password[i]))
			{
				password[i] = tolower(password[i]);
			}
			password[i] = password[i] - key;
		}
	}
	cout << "\n\nThe Encrypted string: " << password;


	//decrypting - reverting back to original password
	if (operation == '+') 
	{
		for (int i = 0; i < password.length(); i++)
		{
			password[i] = password[i] - key;
			if (islower(password[i]))
			{
				password[i] = toupper(password[i]);
			}
			else if (isupper(password[i]))
			{
				password[i] = tolower(password[i]);
			}

		}		
	}
	if (operation == '-') 
	{
		for (int i = 0; i < password.length(); i++)
		{
			password[i] = password[i] + key;
			if (islower(password[i]))
			{
				password[i] = toupper(password[i]);
			}
			else if (isupper(password[i]))
			{
				password[i] = tolower(password[i]);
			}
			
		}		
	}
	cout << "\n\nThe Decrypted string: " << password;
	return 0;
}
