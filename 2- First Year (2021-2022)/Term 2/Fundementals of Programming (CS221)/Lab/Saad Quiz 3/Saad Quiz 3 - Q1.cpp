//question 1
#include <iostream>
#include <string>
using namespace std;

void belowAverage(string* n, int* s, int size);


int main()
{
    int size; //declare no. of students
    cout << "Enter the number of students in the class: ";
    cin >> size;
    string* names = new string[size]; //delcare names dynamic array
    int* score = new int[size]; //declare scores dynamic array

    for (int i = 0; i < size; i++) //input student info
    {
        cout << "Enter student " << i+1 << " name: ";
        cin >> names[i];
        cout << "Enter student " << i+1 << " score: ";
        cin >> score[i];
    }

    belowAverage(names, score, size);
    return 0;
}


void belowAverage(string* n, int* s, int size)
{
    int sum = 0;
    double avg = 0;
    for (int i = 0; i < size; i++) //loop to get sum of all scores
    {
        sum += s[i];
    }
    avg = ((sum*1.0)/(size)); //calculating average

    cout << "The Class's average is: " << avg << endl;

    for (int i = 0; i < size; i++) //if students score is less than or equal 60, need extra classes
    {
        if (s[i] <= 60)
        {
            cout << n[i] << " needs extra class, the grade: " << s[i] << endl;
        }
    }
}