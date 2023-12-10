#include <iostream>
using namespace std;

int main()
{
	char c = 'A';
	double *p = &c; //ANSWER: datatype of pointer must be same as datatype of variable 


	cout << c << endl;
	cout << *p << endl;
}