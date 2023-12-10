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

char printGrade(int mark);
void getInfo(students &s);


int main()
{
    students info;
    getInfo(info);

    cout << "Final grade of " << printGrade(info.mark);
    return 0;
}


void getInfo(students &s)
{
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter ID: ";
    cin >> s.id;
    cin.ignore();
    cout << "Enter Major: ";
    getline(cin, s.name);
    cout << "Enter Mark: ";
    cin >> s.mark;
    if (s.mark > 100 || s.mark < 0)
    {
        cout << "Invalid Mark\n";
        main();
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