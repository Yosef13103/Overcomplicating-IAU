#include <iostream>
using namespace std;

int main()
{
	int size, sum=0, avg=0, count=0;
	cout << "Enter your array size: ";
	cin >> size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter item #" << i + 1 << " value: ";
		cin >> arr[i];
		count++;
	}
	
	//sum
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	
	cout << "Sum of numbers = " << sum << endl;
	//average
	for (int i = 0; i < size; i++)
	{
		avg = sum/count;
	}
	cout << "Average of numbers = " << avg << endl;
	
	//max
	int max = arr[0], min = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Max number = " << max << endl;
	
	//min
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Min number = " << min << endl;
		
	return 0;
}
