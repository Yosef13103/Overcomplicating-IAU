#include <iostream>
#include <fstream>
#include <string>
using namespace  std;

int main()
{
    ofstream output;
    output.open("Q2.txt");
    int size;
    char letter;

    while(true)
    {
        cout << "Please enter the number of letters in your full name: " << endl;
        if (size < 18)
        {
            cout << "Number of letters must be more than 17." << endl;
            continue;
        }
        break;
    }
    cin >> size;

    for (int i = 0; i < size; i++) //inputting letters into file
    {
        cout << "Enter the letters of your name, #" << i+1 << ": ";
        cin >> letter;
        output << letter << "\n";
    }
    output.close();

    //inputing to create a user password
    ifstream input;
    input.open("Q2.txt");

    string temp; //temp stores each letter for getline reading
    int count = 0;
    int k = 0;

    char user_password[(size/3)]; //stores every 3rd character
    while (getline(input, temp)) //loop each line
    {
        if (count%3 == 0)
        {
            user_password[k] = temp[0];
            k++;
        }
        count++;
    }

    cout << "Suggested Password: " << endl;
    for (int i = 0; i < size/3; i++)
    {
        cout << user_password[i];
    }
    
    return 0;
}