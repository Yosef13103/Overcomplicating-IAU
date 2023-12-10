#include <iostream>
using namespace std;

int main()
{
	int array[4][4], sum=0;
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++) 
		{
			cin >> array[row][col]; //inputting array
		}
	}
	
	for (int row = 0; row < 4; row++) //left diagonal sum
	{
		for (int col = 0; col < 4; col++) 
		{
			if (row == col) //index of rows must equal columns for it to be the left diagonal
			{
				sum = sum + array[row][col];
			}
		}
	}
	cout << "A) Sum of Left Diagonal elements: " << sum << endl;
	 
	sum = 0;
	for (int row = 0; row < 4; row++) //right diagonal sum
	{
		for (int col = 0; col < 4; col++) //columns
		{
			if (row + col == 3) //index of rows + index of columns must equal 3 for it to be the right diagonal
			{
				sum = sum + array[row][col];
			}
		}
	} 
	cout << "B) Sum of Right Diagonal elements: " << sum << endl; 
	
	cout << "C) Lower Diagonal Elements: ";
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++) 
		{
			if (row > col) //as long as index of rows is bigger than index of columns: 0 > 0 = false. 0 > 1 = false. 0 > 2 = false. 0 > 3 = false --> next row
			{																		// 1 > 0 = true.  1 > 1 = false. 1 > 2 = false. 1 > 3 = false --> next row
				cout << array[row][col] << " ";										// 2 > 0 = true.  2 > 1 = true.  2 > 2 = false. 2 > 3 = false --> next row
			}																		// 3 > 0 = true.  3 > 1 = true.  3 > 2 = true.  3 > 3 =  false --> next row
		}																			// end because i no longer < 4
		cout << endl;
	}

	cout << "D) Upper Diagonal Elements: " << endl;
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++) 
		{
			if (row < col) //as long as index of rows is smaller than index of columns: 0 < 0 = false. 0 < 1 = true.  0 < 2 = true.  0 < 3 = true --> next row
			{																		//  1 < 0 = false. 1 < 1 = false. 1 < 2 = true.  1 < 3 = true --> next row
				cout << array[row][col] << " ";										//  2 < 0 = false. 2 < 1 = false. 2 < 2 = false. 2 < 3 = true --> next row
			}																		//  3 < 0 = false. 3 < 1 = false. 3 < 2 = false. 3 < 3 = true --> next row
		}																			// end because i no longer < 4
		cout << endl;
	}
	return 0;
}
