/* Task 10 - Write a C++ program that will read an array of 10 numbers from the user. Then 
check if those numbers were entered in ascending order (incrementally from smaller 
to larger). If they were entered in ascending order print the message “ordered 
ascendingly” otherwise, print “unordered ascendingly” */
#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	cout << "Enter 10 numbers: ";
	for (int i=0; i<10; i++)
	{
		cin >> arr[i];
	} 
	
	for (int i=0; i<9; i++)
	{
		if (arr[i] <= arr[i+1])
		{
			cout << "Unordered ascendingly";
			return 0;
		} 
	} 
	cout << "Ordered ascendingly";
	return 0;
}
