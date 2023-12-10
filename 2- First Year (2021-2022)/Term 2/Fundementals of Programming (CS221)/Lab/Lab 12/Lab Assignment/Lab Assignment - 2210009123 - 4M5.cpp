//Lab Assignment - CS221 - 2210009123 - 4M5
#include <fstream> 
#include <iostream> 
#include <string>
using namespace std;

int main()
{
    ifstream fileinput; //inputting from alphanumeric.txt
    ofstream fileoutput; //outputting to other .txt files#
    string alphanumeric, alphabet, number, other;
    fileinput.open("Alphanumeric.txt"); //open alphanumeric.txt
    if(!fileinput.is_open()) //checking to make sure file is open
    {
        cout << "Error, File Not Opened." << endl;
        cout << "Please make sure that \"Alphanumeric.txt\" exists." << endl;
        return -1;
    }
    
    string i = "";
    while (getline(fileinput, i)) //while loop to ensure inputs every line
    {
        alphanumeric += i; //storing text in alphanumeric string
    }
    fileinput.close();

    for (int i = 0; i < alphanumeric.length(); i++)
    {
        if ((alphanumeric[i] >= 'a' && alphanumeric[i] <= 'z') || (alphanumeric[i] >= 'A' && alphanumeric[i] <= 'Z')) //for alphabets
        {
            alphabet += alphanumeric[i]; //if true, store in string for alphabets
        }
        else if ((alphanumeric[i] >= '0' && alphanumeric[i] <= '9')) //for numbers
        {
            number += alphanumeric[i]; //if true, store in string for numbers
        }
        else //for others
        {
            other += alphanumeric[i]; //if true, store in string for others [symbols, spaces, etc.]
        }   
    }

    //saving in respective files, closing after each .txt file
    fileoutput.open("Alphabet.txt");
    fileoutput << alphabet;
    fileoutput.close();
    fileoutput.open("Number.txt");
    fileoutput << number;
    fileoutput.close();
    fileoutput.open("Other.txt");
    fileoutput << other;
    fileoutput.close();


    //displaying files to user
    cout << "Alphabets: " << alphabet << endl;
    cout << "Numbers: " << number << endl;
    cout << "Symbols: " << other << endl;

    return 0;
}