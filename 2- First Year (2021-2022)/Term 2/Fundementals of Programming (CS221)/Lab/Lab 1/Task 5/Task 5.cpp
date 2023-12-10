#include <iostream>
using namespace std;

int main()
{
	int size, pass=0, fail=0, incorrect=0;
	cout << "Enter number of students: ";
	cin >> size;
	int marks[size];
	
	cout << "Enter students marks:" << endl;
	for (int i = 0; i < size; i++) //Inputting values for array marks[size]
	{
		cin >> marks[i];
		if (marks[i] >= 60)
		{
			pass++;
		}
		if ((marks[i] >= 0) && (marks[i] < 60))
		{
			fail++;
		}
		if (marks[i] < 0)
		{
			incorrect++;
		}
	}
	
	cout << "Results: " << endl;
	cout << "Percentage of passed students = " << ((pass*100.0)/size) << "%" << endl;
	cout << "Percentage of failed students = " << (fail*100.0)/size)  << "%" << endl;
	cout << "Percentage of incorrect students = " << ((incorrect*100.0)/size) << "%" << endl;
	
	return 0;
}
