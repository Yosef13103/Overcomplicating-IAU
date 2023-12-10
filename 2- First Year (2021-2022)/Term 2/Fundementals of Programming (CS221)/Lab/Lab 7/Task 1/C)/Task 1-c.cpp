#include <iostream>
using namespace std;
 bool test_fun (int x, int& y) {
      if (x < y || y > 1)
          return true;
      else {
          y = x%2;
      return false;}
}
int main( ) {
 int y = 1;
 for (int x= 0; x < 4; x++) {
    if ( test_fun(x, y) )
        cout << "TRUE y=" << y << "\n";
    else
        cout << "FALSE y=" << y << "\n";
  }
 return 0;
}


