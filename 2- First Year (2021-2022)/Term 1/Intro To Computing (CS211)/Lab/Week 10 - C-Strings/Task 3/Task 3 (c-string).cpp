#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const char fav[10] = "apple";
	char guess[10];
	bool win = false;
	while (!win) //not false = true, continue loop
	{
		cout << "Guess my favorite fruit? ";
		cin.get(guess, 10);
		if (!strcmp(fav, guess))
		{
			cout << "Correct answer";
			win = true; //if win, then while become while not true = false, exit loop
		}
	}
}
