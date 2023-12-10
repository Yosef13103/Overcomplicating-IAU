//Lab 7 - Task 3 - Yosef Ahmed - 2210009123 - 4M5 
#include <iostream>
#include <string>
using namespace std;

void viewCurrent(double balance) //view current balance
{
	cout << balance << " S.R\n" << endl;
}

void viewNew(string name, double initial, double final) //view new balance
{
	cout << "\nCustomer name: " << name << endl;
	cout << "Your balance was: " << initial << " S.R" << endl;
	cout << "Your new balance is: " << final << " S.R\n" << endl;
}

double withdrawl(double balance) //withdraw function
{
	double withdraw;
	cout << "Enter withdrawl amount: ";
	cin >> withdraw;
	return balance - withdraw;
}

double deposit(double balance) //deposit function
{
	double deposit;
	cout << "Enter deposit amount: ";
	cin >> deposit;
	return balance + deposit;
}

int main()
{
	string name;
	char choice;
	double initialbalance = 10000, newbalance;
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Your balance is: ";
	viewCurrent(initialbalance);
	newbalance = initialbalance;
	while (true) //part b
	{
		cout << "Please choose a task:" << endl << "d - Withdraw" << endl << "p - Deposit" << endl << "e - Exit \n\n";
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice == 'd')
		{
			newbalance = withdrawl(newbalance);
		}
		else if (choice == 'p')
		{
			newbalance = deposit(newbalance);
		}
		else if (choice == 'e') //part b
		{
			cout << "Exiting...";
			break;
		}
		else 
		{
			cout << "That is not a valid task. Please try again." << endl;
		}
		viewNew(name, initialbalance, newbalance);
	}	
	return 0;
}
