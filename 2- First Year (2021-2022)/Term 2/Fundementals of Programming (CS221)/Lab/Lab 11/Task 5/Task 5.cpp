#include <iostream>
using namespace std;

void reserve(bool **arr, int rows, int cols);
void available(bool **arr, int rows, int cols);
void display (bool **arr, int rows, int cols);

int main()
{
    int sizerows, sizecols;
    char choice, quit;
    cout << "How many rows are in the plane: ";
    cin >> sizerows;
    cout << "How many seats per row: ";
    cin >> sizecols;

    bool** arrptr = new bool*[sizerows];
    for (int i = 0; i < sizerows; i++)
    {
        arrptr[i] = new bool[sizecols];
    }
    for (int i = 0; i < sizerows; i++)
    {
        for (int j = 0; j < sizecols; j++)
        {
            arrptr[i][j] = 0;
        }
    }

    while (true)
    {
        cout << "\n----Menu----" << endl;
        cout << "1- Reserve a seat" << endl << "2- Display Available Seats" << endl << "3- Display All Seats" << endl;
        cin >> choice;
        if (choice == '1')
        {
            reserve(arrptr, sizerows, sizecols);
        }
        else if (choice == '2')
        {
            available(arrptr, sizerows, sizecols);
        }
        else if (choice == '3')
        {
            display (arrptr, sizerows , sizecols);
        }
        else
        {
            "This option is not available in the menu, please try again.";
        }

        cout << "\nWould you like to quit? (n/y): ";
        cin >> quit;
        if (quit == 'y')
        {
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

void reserve(bool **arr, int rows, int cols)
{
    int row, col;
    cout << "What seat would you like to reserve? [row][col]: ";
    cin >> row;
    cin >> col;
    if (arr[row][col] == 1)
    {
        cout << "Sorry, this seat is already reserved" << endl;
    }
    else
    {
        cout << "Seat successfully reserved!" << endl;
        arr[row][col] = 1;
    }
}

void available(bool **arr, int rows, int cols)
{
    int count=0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    cout << "Available Seats: " << count;
}

void display (bool **arr, int rows, int cols)
{
  for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}