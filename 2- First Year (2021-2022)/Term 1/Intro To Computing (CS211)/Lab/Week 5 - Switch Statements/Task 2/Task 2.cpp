//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() 
{
	int month;
	cout << "Enter number of month: ";
	cin >> month;
	
	switch(month) 
	{
		case 1: 		//Jan 		-All of these cases will be considered as the final case with output "31 days"
		case 3:			//March 	-This is because there is no "break;" until case 12 
		case 5:			//May
		case 7:			//July
		case 8: 		//Aug
		case 10:		//Oct
		case 12:		//Dec
			cout << "31 days";
			break;	
		case 2:			//Feb		-This alone would be considered it's own case, as it has a "break;"
			cout << "28/29 days";
			break;
		case 4:			//Apr		-These too will be considered the same as the final case, which is "30 days"
		case 6:			//June
		case 9: 		//Sept
		case 11:		//Nov
			cout << "30 days";
			break;
		default:
			cout << "You didn't input a correct number of month, (1 to 12))";
	}
	return 0;
}
