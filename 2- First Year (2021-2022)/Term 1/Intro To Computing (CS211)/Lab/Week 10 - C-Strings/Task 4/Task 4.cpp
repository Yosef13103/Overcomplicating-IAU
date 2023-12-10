#include <iostream>
#include <string>
using namespace std;

int main()
{
	string letter, phrase, temp;
	int occurred=0;
	cout << "Enter letter: ";
	getline(cin, letter);
	cout << "Enter phrase: ";
	getline(cin, phrase);
	
	for (int i=0; i < phrase.length(); i++)
	{
		temp = phrase.at(i); //temp value to store the character to compare
		if (!temp.compare(letter)) //use not because correct comparsison give = 0
		{
			occurred++; //increment by 1 if letter has occurred
		}
	}
	cout << "The letter \"" << letter << "\" occurred " << occurred << " times.";
	
	return 0;
}
