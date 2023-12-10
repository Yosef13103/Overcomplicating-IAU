#include <iostream>
#include <string>
using namespace std;

double calAverage(int sum, int size)
{
	double avg = (sum*1.0)/size;
}

int main()
{
	int size, pass=0, fail=0, incorrect=0, pointer, sum=0;
	cout << "Enter number of students: ";
	cin >> size;
	int marks[size];
	string names[size];
	
	
	for (int i = 0; i < size; i++) 
	{
		cout << "Enter student#" << i+1 << " name:" << endl;
		cin >> names[i];
		cout << "Enter student#" << i+1 << "mark:" << endl;
		cin >> marks[i];
		sum += marks[i];
	}
	
	int max = marks[0];
	for (int i = 0; i < size; i++) //finding max mark
	{
		if (marks[i] > max)
		{
			max = marks[i];
		}
	}	
	for (int i = 0; i < size; i++) //finding student with max using index
	{
		if (max == marks[i])
		{
			pointer = i;
		}
	}
	
	
	cout << "Results: " << endl;
	cout << "Student with max mark is " << names[pointer] << " of mark " << max << endl;
	cout << "Students Average = " <<  calAverage(sum, size) << endl;
	cout << "Students with marks above average are: " << endl;
	
	for (int i = 0; i < size; i++) //finding student with max using index
	{
		if (marks[i] > calAverage(sum, size))
		{
			cout << names[i] << endl;
		}
	}
	
	return 0;
}
