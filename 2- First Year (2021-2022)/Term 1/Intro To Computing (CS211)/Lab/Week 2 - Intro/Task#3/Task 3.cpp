//Yosef Ahmed 2210009123 3M2
#include <iostream>
using namespace std;

int main() {
	double Width, Length, Area, AreaInch, Tiles; //Declaring 
	cout << "Enter Width in feet: ";
	cin >> Width;	//Inputting Width
	cout << "Enter Length in feet: ";
	cin >> Length; //Inputting Length
	Area = Width * Length; //Calculating Area 
	cout << "Area is " << Area << " Foot^2"; //Outputting Area
	AreaInch = Area * 144 ; //Converting to inches^2
	Tiles = AreaInch/(6*6);
	cout << "\nYou need " << Tiles << " 6-inch tiles to cover this area";
	return 0;  
}
