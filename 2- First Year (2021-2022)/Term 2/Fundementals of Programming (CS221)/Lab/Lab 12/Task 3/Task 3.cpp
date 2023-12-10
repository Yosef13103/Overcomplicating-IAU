#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

void WriteLetter()
{
    char c;
    int size;
    ofstream file;
    file.open("alphabet.txt");
    cout << "Please enter the number of letters: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter character #" << i+1 << ": " << endl;
        cin >> c;
        file << c;
    }
    file.close();
}

void displayContent()
{
    ifstream file;
    string output = "";
    file.open("alphabet.txt");
    file >> output;
    for (int i = 0; i < output.length(); i++)
    {
        cout << output[i] << "\n";
    }
    file.close();
}

int main()
{
    while(true)
    {
        int choice;
        cout << "Menu Options\n 1 Add set of letters\n 2 Display the file content\n 3 Exit the program\n" << endl;
        cout << "Choice (1, 2, 3,)? ";
        cin >> choice;
        if (choice == 1)
        {
            WriteLetter();
        }
        else if (choice == 2)
        {
            displayContent();
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "This choice is not an option, please try again" << endl;
        }
    }

}