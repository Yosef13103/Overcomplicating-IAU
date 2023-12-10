//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main(void) {
	int credits; 
	bool coop;
	cout << "How many credit hours do you have: ";
	cin >> credits;
	cout << "Have you taken coop training? (1 for yes, 0 for no) ";
	cin >> coop;
	if (credits >= 150 && coop == true) {
			cout << "Congrats grad!";
	}
	else {
		cout << "You haven't completed graduation requirements";
	}	
		return 0;
}
