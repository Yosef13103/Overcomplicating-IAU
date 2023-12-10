//Yosef Ahmed 2210009123 3M2
#include <iostream>

using namespace std;

int main()
{
	int adult, child, cost;
	cout << "How many adults are in your family: ";
	cin >> adult;
	cout << "How many children are in  your family: ";
	cin >> child;
	cost = ((child + adult) > 4) ? ((adult * 9000 * 0.95) + (child * 6500 * 0.90)) : ((adult * 9000) + (child * 6500));
	cout << "Total Cost: " << cost;
	return 0;
}
