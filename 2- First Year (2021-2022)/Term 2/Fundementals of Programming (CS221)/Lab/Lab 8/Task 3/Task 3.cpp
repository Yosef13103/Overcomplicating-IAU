#include <iostream>
using namespace std;

struct advertising {
    int shown;
    double percent, avg;
};

void printTotal(advertising a)
{
    double total;
    cout << "ads shown: " << a.shown << endl;
    cout << "percentage of clicks: " << a.percent << endl;
    cout << "average earned per click " << a.avg << endl;
    total = a.shown * a.percent * a.avg;
    cout << "Made $" << total;
}


int main()
{
    advertising ad;
    cout << "Enter ads shown: ";
    cin >> ad.shown;
    cout << "Enter percentage: ";
    cin >> ad.percent;
    cout << "Enter average earned: ";
    cin >> ad.avg;
    cout << "\n";
    printTotal(ad);

    return 0;
}
