#include <iostream>
using namespace std;

struct Distance {
    int feet;
    double inch;
};

int main()
{
    Distance dis[2];
    int feet;
    double inch;
    cout << "Enter first distance (feet inches) ";
    cin >> dis[0].feet;
    cin >> dis[0].inch;
    cout << "Enter second distance (feet inches) ";
    cin >> dis[1].feet;
    cin >> dis[1].inch;

    feet = dis[0].feet + dis[1].feet;
    inch = dis[1].inch + dis[0].inch;

    if (inch >= 12.0)
    {
        feet++;
        inch -= 12.0;
    }

    cout << "Sum is: " << feet << "\'" << inch << "\"";

    return 0;
}
