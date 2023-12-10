//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()
{
	int num, count, ans;
	cout << "Enter an integer: ";
	cin >> num;
	for (count = 1; count <= 10; count++)
	{
	ans = num * count ;
	cout << num << " * " << count << " = " << ans << endl;
	}
	return 0;
}
