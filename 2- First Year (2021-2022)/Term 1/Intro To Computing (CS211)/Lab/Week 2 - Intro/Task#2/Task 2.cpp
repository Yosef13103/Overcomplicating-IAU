//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() {
	double Salary, Sales, Comm, Pay; //Declaring 
	cout << "Enter Base Salary: ", cin >> Salary;	//Inputting Salary
	cout << "Enter Total Sales: ", cin >> Sales; //Inputting Sales
	cout << "Enter Commission Rate: ", cin >> Comm; //Inputting Commission
	Pay = (Sales * Comm) + Salary ; //Calculating Pay
	cout << "Final Pay is = " << Pay; //Outputting Pay
	return 0;  
}


