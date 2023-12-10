#include <iostream>
using namespace std;

int main()
{
	int size, rotate, newpos;
	bool direction;
	cout << "Enter array size: ";
	cin >> size;
	int arr[size], temp[size];
	
	cout << "Enter the array items: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Number of cells to rotate: ";
	cin >> rotate;
	
	cout << "What direction? (0 for left, 1 for right): ";
	cin >> direction;
	
	if (direction == 1) //rotating to the right
	{
		for (int i = 0; i < size; i++)
		{
			newpos = i+rotate;
			if (newpos >= size)
			{
				newpos = newpos%size;
			}
			temp[newpos] = arr[i];
		}		
	}
	
	if (direction == 0) //rotating to the left
	{
		for (int i = size-1; i >= 0; i--)
		{		
		 	newpos = i-rotate;			// size = 6, rotate = 3, i starts at 5 to 0
			if (newpos < 0)					// i=5 newpos = 2
											// i=4 newpos = 1
											// i=3 newpos = 0			
											// i=2 newpos = (5)+(-1+1) = 5+(0) = 5			
											// i=1 newpos = (5)+(-2+1) = 5+(-1) = 4
											// i=0 newpos = (5)+(-3+1) = 5+(-2) = 3
			{						
				newpos = size+newpos;			//after i = 0, i should go back to size-1
			}
			temp[newpos] = arr[i];	
		}		
	}
	
	cout << "Rotated array:" << endl;
	for (int i = 0; i < size; i++)
		{
			cout << temp[i] << " ";
		}

	return 0;
}

