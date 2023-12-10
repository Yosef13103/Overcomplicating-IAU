//2210009123 - Yosef Ahmed - 3M2
#include <iostream>
using namespace std;

int main()
{
	int numbers[4][4] = {{2,3,5,6}, 
					     {6,6,6,5}, 
						 {2,3,2,3}, 
						 {3,5,7,9}};
	int RowSum, ColSum;
	
	//Rows
	for (int row = 0; row < 4; row++) //loop for 2D array (moving through each column in a row)
	{
		RowSum=0; //resetting the sum back to 0 after each row
		for (int col = 0; col < 4; col++)
		{
			RowSum = RowSum + numbers[row][col]; //summing each row
		}
		if ((RowSum % 2) == 0) //checking if the sum of the row is even (remainder = 0)
		{
			cout << "The sum of row #" << row+1 << " is EVEN" << endl; //if true then print
		}
	}
	
	//Columns
	for (int col = 0; col < 4; col++) //loop for 2D array (moving through each row in a column)
	{
		ColSum = 0; //resetting the sum back to 0 after each column
		for (int row = 0; row < 4; row++)
		{
			ColSum = ColSum + numbers[row][col]; //summing each column
		}
		if ((ColSum % 2) != 0) //checking if the sum of the column is odd (not even (remainder not = 0))
		{
			cout << "The sum of cols #" << col+1 << " is ODD" << endl; //if true then print
		}
	}		
	
	return 0;
}
