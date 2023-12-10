//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() {
	int id, age, price, seats, cost, flag;
	char type;
	flag = 0;	//To stop code if seat type is incorrect
	cout << "Enter your ID number and your age:" << endl;
	cin >> id >> age;
	if (age >= 18) 		//If user is 18 or older
	{
		cout << "Choose a class seat type (A, B, or C): " << endl;
		cin >> type;
		switch(type)
		{
			case 'A':
			case 'a':
				price = 100;				
				break;
			case 'B':
			case 'b':
				price = 75;
				break;
			case 'C':
			case 'c':
				price = 50;
				break;
			default:
				cout << "You did not input a correct seat type.";
				flag = 1;
		}
		if (flag != 1) 
		{
			cout << "How many seats do you want to book? " << endl;
			cin >> seats;
			cost = seats * price;
			cout << "Total cost = " << cost;
		}
	}
	else 
	{			//If user is younger than 18
		cout << "Sorry, you are not allowed to book a seat.";
	}
	

	
	return 0;
}
