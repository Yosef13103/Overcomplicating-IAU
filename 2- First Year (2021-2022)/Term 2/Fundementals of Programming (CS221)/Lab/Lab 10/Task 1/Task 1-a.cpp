#include <iostream>
using namespace std;

int main()
{
	int *p; //pointer p
	int i; //variable i
	int k;  //variable k
	i = 42;  //variable i = 42
	cout << i << endl;
	k = i;  //variable k = i = 42
	p = &i;  //variable that stores the address of i (points to i because of line 1)
	*p = 75; //ANSWER

	cout << k << endl;
	cout << p << endl;
	cout << *p << endl;
	cout << i << endl;

}