#include <iostream>
#include <string>
using namespace std; 

int main()
{
	string phrase = "";
	char letter;
	cout << "Enter the phrase:" << endl;
	getline(cin, phrase);
	cout << "Enter the letter:" << endl;
	cin >> letter;
	
	cout << "The indexes in which " << letter << " appeared are:" << endl;
	for (int i = 0; i < phrase.length(); i++)
	{
		if (phrase.at(i) == letter)
		
		{
			cout << i << " ";
		}

	}
}
