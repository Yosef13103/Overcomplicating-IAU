#include <iostream>
using namespace std;

typedef double* arrayPtr;

void fillarray(arrayPtr cost, arrayPtr cups, int arraySize);
double calculateTotalPrice(arrayPtr cost, arrayPtr cups, int arraySize);

int main()
{
    int size = 7;
    double* cups = new double[size];
    double* price = new double[size];
    fillarray(price, cups, size);
    cout << "Total Cost: " << calculateTotalPrice(price, cups, size);
    return 0;
}

void fillarray(arrayPtr cost, arrayPtr cups, int arraySize)
{
    cout << "Enter the number of cups of coffee you ordered and the price";
    for (int i = 0; i < arraySize; i++)
    {
        cout << "\n-----Day #" << i+1 << "-----" << endl;
        cout << "Number of cups: ";
        cin >> cups[i];
        cout << "Price: ";
        cin >> cost[i];
    }
}

double calculateTotalPrice(arrayPtr cost, arrayPtr cups, int arraySize)
{
    double sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum = sum + (cost[i]*cups[i])
    }
    return sum;
}
