//CS221 Quiz 3 - Yosef Ahmed - 2210009123 - 4M5
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string sample = "";
    ifstream inputsample; 
    ofstream outputtags;
    ofstream outputinfo;
    inputsample.open("Sample.txt");
    outputtags.open("Tags.txt");
    outputinfo.open("Info.txt");

    if(!inputsample.is_open()) //checking to make sure file is open
    {
        cout << "Error, File Not Opened." << endl;
        cout << "Please make sure that \"Sample.txt\" exists." << endl;
        return -1;
    }

    string line = "";
    string tags = "";
    string info = "";
    int linecount=0;
    while (getline(inputsample, line)) //while loop to read per line
    { 
        int postag1 = line.find('>'); //finding the first tag
        int postag2 = line.find('<', postag1 + 1); //finding second tag
        int posend = line.find(">", postag2); //finding end of line

        for (int i = 0; i < postag1 + 1; i++) //first tag
        {
            tags += line[i];
        }

        for (int i = postag1+1; i < postag2; i++) //info
        {
            info += line[i];  
        }
            info += "\n";
            linecount++;

        for (int i = postag2; i < posend+1; i++) //second tag
        {
            tags += line[i];
        }
            tags += "\n";
    }

    outputtags << tags;
    outputinfo << info;

    inputsample.close();
    outputtags.close();
    outputinfo.close();


    ifstream inputinfo;
    inputinfo.open("Info.txt");
    string infoline = "";
    string info1 = "";
    int count = 0;
    string lines[linecount];
    

    while (getline(inputinfo, infoline)) //while loop to read per line
    { 
        bool flag = 0;
        if (infoline != "\0")
        {
            info1 = info1 + infoline + "\n";
            flag = 1;
        }
        if (flag == 1)
        {
            continue;
        }

        lines[count] = info1;
        count++;
        info1 = "";
    }

    //removing blank arrays
    string nospaces[6]; 
    int j=0;
    for (int i = 0; i < linecount; i++)
    {
        if (lines[i] != "")
        {
            nospaces[j] = lines[i];
            j++;
        }
    }


    while(true)
    {
        int option;
        int end = 0;
        cout << "Enter option [1-6]: ";
        cin >> option;
        if ((option > 0) && (option < 7))
        {
            cout << nospaces[option-1];
        }
        else
        {
            cout << "Please enter only from 1 to 6" << endl;
            continue;
        }
        break;
    }

    return 0;
}