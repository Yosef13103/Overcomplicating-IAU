//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() 
{
	int size, max=0, min=0; //need an if statement for max and min
	double sum=0, average;	//making sum an double, so we don't have issue with average. double/int = double
	cout << "Enter Number Size: ";
	cin >> size;
	int number[size];
	cout << "Enter [" << size <<"] numbers" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> number[i];
		sum = sum + number[i];	//sum
	}
	
	average = sum/size;	//average
	
	min = number[0]; 	//min and max
	max = number[0];
	for (int i = 0; i < size; i++)
	{
		if (number[i] > max)
		{
			max = number[i];
		}
		
		if (number[i] < min)
		{
			min = number[i];
		}		
	}


	
	cout << "The number of values is " << size << endl;
		for (int i = 0; i < size; i++)
	{
		cout << number[i] << " ";
	}
	cout << "\nThe Sum is: " << sum << endl;
	cout << "The Average is: " << average << endl;
	cout << "The Largest is: " << max << endl;
	cout << "THe Smallest is: " << min << endl;
	
	return 0;
}
