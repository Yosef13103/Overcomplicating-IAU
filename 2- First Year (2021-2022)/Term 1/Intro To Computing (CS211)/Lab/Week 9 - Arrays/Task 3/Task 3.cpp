//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() 
{
	const int size = 10;
	int numbers[size], distinct = 0;
	cout << "Enter ten numbers: ";	//inputting the 10 numbers
	for (int i = 0; i < size; i++) 
	{
		int temp;
		bool exist = false;
		cin >> temp; //storing the value in temp first
		for (int i = 0; i < distinct; i++) //first time distinct = 0, so temp auto gets added to the array.
		{
			if (temp == numbers[i]) //if temp exists in number, then it is not distinct
			{
				exist = true;
			}
		}
	if (!exist) //if the value doesnt exist, then it is distinct
	{
		numbers[distinct] = temp;
		distinct++;
	}
	}
	
	cout << "The number of distinct number is " << distinct << endl;
	cout << "the distinct numbers are "; //outputting 
	for (int i = 0; i < distinct; i++)
	{
		cout << numbers[i] << " ";
	}
	return 0;
}
