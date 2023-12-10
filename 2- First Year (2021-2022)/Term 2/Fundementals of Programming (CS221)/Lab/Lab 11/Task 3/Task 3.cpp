#include <iostream>
using namespace std;

int Array(int arraySize);
int OddSum(int *arrayPointer, int arraySize);

int main()
{
    int size;
    cout << "Enter Array Size: ";
    cin >> size;
    cout << "Sum of Odd Indexes: " << Array(size);

    return 0;
}

int Array(int arraySize)
{
    int* a = new int[arraySize];
    cout << "Enter " << arraySize << " Numbers: ";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> a[i];
    }

    return OddSum(a, arraySize);
}
int OddSum(int *arrayPointer, int arraySize)
{
    int sum=0;
    for (int i = 0; i < arraySize; i++)
    {
        if (i%2 != 0)
        {
            sum = sum + arrayPointer[i];
        }
    }
    return sum;
}