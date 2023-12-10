#include <iostream>
#include <string>
using namespace std;

struct students
{
    string name;
    int id;
    string major;
    int mark;
};

void getInfo(students s[], int size);
char printGrade(int mark);

int main()
{
    int size, sum;
    cout << "Enter number of students: ";
    cin >> size;
    students info[size];
    getInfo(info, size);
    
    for (int i = 0; i < size; i++)
    {
        sum += info[i].mark;
    }
    
    cout << "Final grade of class is " << printGrade(sum/size);
    return 0;
}


void getInfo(students s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin.ignore();
        cout << "Enter information for student " << i+1 << endl;
        cout << "Name: ";
        getline(cin, s[i].name);
        cout << "ID: ";
        cin >> s[i].id;
        cin.ignore();
        cout << "Major: ";
        getline(cin, s[i].name);
        cout << "Mark: ";
        cin >> s[i].mark;
        if (s[i].mark > 100 || s[i].mark < 0)
        {
            cout << "Invalid mark\n";
            main();
        }
    }
}

char printGrade(int mark)
{
    char grade;
    if (mark >= 90 && mark <= 100)
    {
        grade = 'A';
    }
    else  if (mark >= 80 && mark <= 89)
    {
        grade = 'B';
    }
    else  if (mark >= 70 && mark <= 79)
    {
        grade = 'C';
    }
    else  if (mark >= 60 && mark <= 69)
    {
        grade = 'D';
    }
    else  if (mark >= 0 && mark <= 59)
    {
        grade = 'F';
    }
    return grade;
}