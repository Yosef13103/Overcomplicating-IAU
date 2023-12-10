//CS221 Quiz 1 - Yosef Ahmed - 2210009123 - 4M5

#include <iostream>
using namespace std;

int main()
{
	int arr[10], sum[10];
	
	//inputting
	cout << "Input 10 integers: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	
	sum[0] = arr[0]; //first sum is just first value in arr
	for (int i = 1; i < 10; i++)
	{
		sum[i] = sum[i-1] + arr[i]; //sum[1] = sum[0] + arr[1]
	}								//sum[2] = sum[1] + arr[2] and so on
	
	//max and min sum
	int max = sum[0], min = sum[0];
	for (int i = 0; i < 10; i++)
	{
		if (sum[i] > max) //maximum 
		{
			max = sum[i];
		}
		
		if (sum[i] < min) //minimum
		{
			min = sum[i];
		}
	}
	
	//outputting
	cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Sum " << i+1 << " is: " << sum[i] << endl;
	}
	cout << "\nMinimum Sum is: " << min << endl;
	cout << "Maximum Sum is: " << max << endl;

	return 0;
}
