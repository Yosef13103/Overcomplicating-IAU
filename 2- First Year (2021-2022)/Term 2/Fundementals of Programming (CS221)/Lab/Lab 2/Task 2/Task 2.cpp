#include <iostream>
using namespace std;

int main()
{
	int size, shift, replace=0, newpos;
	bool direction;
	cout << "Enter array size: ";
	cin >> size;
	int arr[size], temp[size];

	cout << "Enter the array items: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Number of cells to shift: ";
	cin >> shift;
	
	cout << "What direction? (0 for left, 1 for right): ";
	cin >> direction;
	
	cout << "What to replace discared values with? ";
	cin >> replace;
	
	if (direction == 1) //Shifting to the right
	{
		for (int i = 0; i < size; i++)
		{
			newpos = i+shift;
			temp[newpos] = arr[i];
			if (newpos >= size)
			{
				newpos = newpos%size;
				temp[newpos] = replace;	
			}
		}	
	}
	
	if (direction == 0) //Shifting to the left
	{
		for (int i = size-1; i >= 0; i--)
		{
			newpos = i-shift;
			temp[newpos] = arr[i];					
			if (newpos < 0)
			{
				newpos = size-1-i;	
				temp[newpos] = replace;	
			}		
		}		
	}
	
	cout << "Rotated array:" << endl;
	for (int i = 0; i < size; i++)
		{
			cout << temp[i] << " ";
		}
	
	return 0;
}

