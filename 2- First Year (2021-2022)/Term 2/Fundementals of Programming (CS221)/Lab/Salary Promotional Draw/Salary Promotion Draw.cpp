#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size=1, rotate, newpos, winning;
	while (size%2 != 0)
	{
		cout << "Input number of staff (array size) ";
		cin >> size;
		if (size%2 == 0)
		{
			break;
		}
		cout << "Size must be an even number" << endl;
	}
	
	string names[size], jobs[size], namestemp[size], jobstemp[size];
	
	//inputting
	for (int i=0; i<size; i++)
	{
		cout << "Enter staff member name " << "#" << i+1 << ": ";
		cin >> names[i];
		cout << "Enter job " << "#" << i+1 << ": ";
		cin >> jobs[i];
	}
	
	cout << "Enter number of cells to rotate to the left: ";
	cin >> rotate;
	
	cout << "\nnames before rotation: " << endl;
	for (int i=0; i<size; i++)
	{
		cout << names[i] << " ";
	}
	
	for (int i = size-1; i >= 0; i--) //rotating to the left
	{
		newpos = i-rotate;				
		if (newpos < 0)
		{
			newpos = (size-1)+(newpos+1);
		}
		namestemp[newpos] = names[i];
		jobstemp[newpos] = jobs[i];	
	}	
	
	cout << "\n\nnames after rotation: " << endl;
	for (int i=0; i < size; i++)
	{
		cout << namestemp[i] << " ";
	}		
	
	winning = size/2-1;
	
	cout << "\n\nWinning staff name: " << namestemp[winning] << endl;
	cout << "Winning staff job: " << jobstemp[winning] << endl;
	
	return 0;
}
