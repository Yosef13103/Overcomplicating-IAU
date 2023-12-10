#include <iostream>
using namespace std;

void multiplication_Table(int arr[], int size, int tableNo)
{
	for (int i=0; i<size; i++)
	{
		arr[i] = (i+1) * tableNo;
	}
}

int main()
{
	int number, size=10, table[size] ;
	cout << "Enter the table number: " << endl;
	cin >> number;
	
	multiplication_Table(table, size, number);
	for (int i=0; i<size; i++)
	{
		cout << i+1 << " * " << number << " = " << table[i] << endl;
	}
	
	return 0;
}
