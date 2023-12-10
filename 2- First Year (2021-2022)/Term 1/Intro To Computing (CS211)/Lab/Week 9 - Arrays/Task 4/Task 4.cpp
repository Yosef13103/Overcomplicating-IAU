//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()
{
	int size=0;
	cout << "Please, Enter array size: ";	//entering array size
	cin >> size;
	int array[size];
	
	cout << "Enter [" << size << "] numbers" << endl; //inputting values
	for (int i = 0; i < size; i++)	
	{
		cout <<	"Enter value - [" << i+1 << "]: ";
		cin >> array[i];
	}

	for (int i = 0; i < size; i++) //sorting smallest to biggest (accending)
	{
		for (int j = i+1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int temp = 0;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;	
			}
		}
	}
	
	cout << "\nAccending list: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	
		for (int i = 0; i < size; i++) //sorting biggest to smallest (Decending)
	{
		for (int j = i+1; j < size; j++)
		{
			if (array[i] < array[j])
			{
				int temp = 0;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;	
			}
		}
	}
	
	cout << "\nDecending list: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}
