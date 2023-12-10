#include <iostream>
#include <string>
using namespace std;

int main()
{
	int const size = 4; //number of players
	string players[size][2], name;
	
	//Adding players info
	for (int i=0; i<size; i++) //row
	{
		cout << "Enter name for player " << i+1 << ": ";
		cin >> players[i][0];
		cout << "Enter highest score for player " << i+1 << ": ";
		for (int j=1; j<2; j++)	//column
		{
			cin >> players[i][j];
		}
	}
	cout << "\n";
	
	//Update players score
	cout << "Which players score to update: ";
	cin >> name;
	for (int i=0; i<size; i++) 
	{
		if (players[i][0] == name)
		{
			cout << "Update player " << i+1 << "'s score to: ";
			for (int j=1; j<2; j++)
			{
				cin >> players[i][j];
			}					
		}
	}
	cout << "\n";
	
	//Delete players info
	cout << "Which player to delete: ";
	cin >> name;
	for (int i=0; i<size; i++) 
	{
		if (players[i][0] == name)
		{
			for (int j=0; j<2; j++)
			{
				players[i][j] = players[i+1][j];
				players[size-1][j] = "\0";
			}			
		}
	}	
	cout << "\n";
	
	
	//Printing player info
	cout << "Players:" << endl; 
	for (int i = 0; i < size; i++)
		{
			for (int j=0; j<2; j++)
			{
				cout << players[i][j] << " ";
			}
			cout << endl;
		}
	return 0;
}
