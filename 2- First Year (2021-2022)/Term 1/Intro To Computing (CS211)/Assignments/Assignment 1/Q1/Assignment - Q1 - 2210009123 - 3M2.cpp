/*
Yosef Ahmed - 2210009123 - 3M2
CS211 Introduction to Computing - Assignment 
Question 1

sample to copy and paste for testing:
1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
31 32 33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48 49 50
51 52 53 54 55 56 57 58 59 60
61 62 63 64 65 66 67 68 69 70
71 72 73 74 75 76 77 78 79 80
81 82 83 84 85 86 87 88 89 90
91 92 93 94 95 96 97 98 99 100
*/

#include <iostream>
using namespace std;

int main()
{
	const int size=10;
	int array[size][size], sum=0, max=0, counter=0;
	double average=0;
	
	cout << "Input 100 values to fit in a 10x10 array:\n";
	for (int row = 0; row < size; row++)  //inputting array
	{
		for (int col = 0; col < size; col++) 
		{
			cin >> array[row][col];
		}
	}
	
	//yellow triangle: above + including (row = column)
	max = array[0][0]; //setting max as first value in yellow triangle to compare
	for (int row = 0; row < size; row++) 
	{
		for (int col = 0; col < size; col++) 
		{
			if (col >= row) //index of column must be equal to or bigger than row
			{
				sum = sum + array[row][col];
				counter++;
				if (array[row][col] > max)
				{
					max = array[row][col];
				}
			}
		}
	}
	average = (sum*1.0)/counter; // *1.0 to output a double
	cout << "\nYellow Triangle:" << endl;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Maximum: " << max << endl;
	
	//red triangle: below (row = column)
	sum = 0, max=0, counter=0; //reseting values for red triangle
	max = array[1][0]; //setting max as first value in red triangle to compare
	for (int row = 0; row < size; row++) 
	{
		for (int col = 0; col < size; col++) 
		{
			if (col < row) //index of column must be smaller than row
			{
				sum = sum + array[row][col];
				counter++;
				if (array[row][col] > max)
				{
					max = array[row][col];
				}
			}
		}
	}
	average = (sum*1.0)/counter;
	cout << "\nRed Triangle:" << endl;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Maximum: " << max << endl;

	return 0;
}
