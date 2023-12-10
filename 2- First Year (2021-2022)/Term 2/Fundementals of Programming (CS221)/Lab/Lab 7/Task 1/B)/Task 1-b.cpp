#include <iostream>
using namespace std;
int fun (int x, int& y) {
   y = x/2; //b=y=3
   x = 8; 
   cout <<"x=" <<x <<" y=" <<y ;
   return x-y; //8-3 = 5
}
int main ( ) {
    int a, b, c;
    a = 7;
    c = fun(a, b); //c=5, b=3
    cout <<" a=" <<a <<" b=" <<b <<" c=" <<c;
    return 0;} 

