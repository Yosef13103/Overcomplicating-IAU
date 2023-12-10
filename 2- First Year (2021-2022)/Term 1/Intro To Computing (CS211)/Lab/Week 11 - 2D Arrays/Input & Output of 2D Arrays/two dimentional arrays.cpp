//two dimentional arrays
#include <iostream>
using namespace std;

int main()
{
	int row_size, col_size;
	cout << "enter pos1 and pos2 size" << endl;
	cin >> row_size >> col_size;
	char array[row_size][col_size], temp = 'x';

	
	for (int row = 0; row < row_size; row++)
	{
		for (int column = 0; column < col_size; column++)
		{
			array[row][column] = temp;
			cout << endl;
		}
	}
	
	for (int row = 0; row < row_size; row++) 
	{
		for (int column = 0; column < col_size; column++)
		{
			cout << array[row][column];
		}
		cout << endl;
	}

	return 0;
}
