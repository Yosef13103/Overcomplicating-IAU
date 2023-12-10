#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size, shift, replace=0, newrowpos, newcolpos;
	bool rowdir, coldir;
	cout << "Enter row size: ";
	cin >> row;
	cout << "Enter column size: ";
	cin >> col;
	int arr[row][col], temp[row][col];

	//Entering data
	cout << "Enter the array items: " << endl;
	for (int i = 0; i < row; i++)
	{	
		for (int j = 0; i < col, j++)
		{
			cin >> arr[i][j];
		}
	}
	
	cout << "Number of cells to rotate: ";
	cin >> rotate;
	
	cout << "What row dirction? (0 for Up, 1 for Down): ";
	cin >> rowdir;

	cout << "What column direction? (0 for left, 1 for right): ";
	cin >> coldir;
	
	if (rowdir == 0) // Rotating Up
		{
			if (coldir == 1) //Shifting Right
				{
					arr[i][j] = arr[i+rotate][j];	
				}
			if (coldir == 0) //Shifting Left
				{
					
				}
		}
	
	if (rowdir == 1) // Rotating Down
	{
			if (coldir == 1) //Shifting Right
				{
					
				}
			if (coldir == 0) //Shifting Left
				{
					
				}
	}
	
	
	
	
	return 0;
}
