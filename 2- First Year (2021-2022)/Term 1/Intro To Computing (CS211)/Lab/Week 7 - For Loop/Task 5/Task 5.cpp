//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main()
{
	int num, range, count, ans;
	cout << "Enter an integer: ";
	cin >> num;
	cout << "Enter range: ";
	cin >> range;
	for (count = 1; count <= range; count++)
	{
		ans = num * count;
		cout << num << " * " << count << " = " << ans << endl;
	}
	return 0;
}
