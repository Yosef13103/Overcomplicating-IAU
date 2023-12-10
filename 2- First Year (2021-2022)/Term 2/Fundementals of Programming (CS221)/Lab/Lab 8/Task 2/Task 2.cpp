#include <iostream>
using namespace std;

struct fraction {
    int n, d;
};

void multiply(fraction f1, fraction f2)
{
    fraction f3;
    f3.n = f1.n * f2.n;
    f3.d = f1.d * f2.d;
    cout << "Product is: " f3.n << "/" << f3.d;
}

int main()
{
    fraction n1, n2;
    cout << "Enter first fraction (numerator denominator) ";
    cin >> n1.n;
    cin >> n1.d;
    cout << "Enter second fraction (numerator denominator) ";
    cin >> n2.n;
    cin >> n2.d;

    multiply(n1, n2);

    return 0;
}
