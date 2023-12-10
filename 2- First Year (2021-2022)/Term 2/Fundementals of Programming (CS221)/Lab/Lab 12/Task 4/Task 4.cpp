#include <fstream> 
#include <string>
using namespace std;

int main()
{
    ofstream file;
    string input = "";
    file.open("numbers.txt");
    for(int i = 10; i <= 25; i++)
    {
        input += to_string(i) + "#" + to_string(i*i) + "\n";
    }
    file << input;
    file.close();
    return 0;
}