#include <iostream>
using namespace std;

int fun(int n) 
{
  	if (n==1)
   	    return 1;
  	else 
     	return 1 + fun(n/2 + 1);
}
int main() 
{
    cout << fun(6) << endl;
    return 0;
}



