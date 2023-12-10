//Yosef Ahmed 2210009123 3M2
#include <iostream>

using namespace std;

int main() 
{
	float price, cost, discount, delivery, total;
	int pieces;
	cout << "Enter item price: ";
	cin >> price;
	cout << "Enter No items: ";
	cin >> pieces;
	if (price >= 100.0 && pieces > 2.0)
	{
		discount = 0.95;
		delivery = 0.0;
	}
	else 
	{
		discount = 1.0;
		delivery = 10.0;
	}
	
	cost = ((price * pieces) * discount) + delivery;
	
	if (cost > 1000.0) 
	{
		total = cost * 0.95;
	}
	else 
	{
		total = cost;
	}
	cout << "Total cost = " << total;
	return 0;
}
