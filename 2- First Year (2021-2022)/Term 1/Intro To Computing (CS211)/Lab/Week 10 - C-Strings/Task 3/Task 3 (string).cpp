#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string fav = "apple";
	string guess;
	bool win = false;
	while (!win) //(can also use while true)
	{
		cout << "Guess my favorite fruit? ";
		getline(cin, guess);
		if (!guess.compare(fav))
		{
			cout << "Correct answer";
			win = true; //(can also use break;)
		}
	}
	
	return 0;
}
