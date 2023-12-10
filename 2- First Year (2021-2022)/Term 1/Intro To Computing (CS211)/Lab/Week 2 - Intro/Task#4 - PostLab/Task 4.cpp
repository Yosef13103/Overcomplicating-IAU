//Yosef Ahmed 2210009123 3M2 
#include <iostream>
using namespace std;

int main() {
	double Edge, Surface1, SurfaceTotal, Volume; //Declaring
	cout << "Enter length for one edge of the cube: ";
	cin >> Edge;	//Inputting value of an edge (length)
	Surface1 = Edge*Edge;	//Area of one face = length * length
	SurfaceTotal = Surface1*6;	//Total Surface Area = Area of one face *  6 sides of a cube
	Volume = Surface1*Edge;		//Volume = Area of one face * length
	cout << "Surface Area of one side = " << Surface1;	//Outputting surface of one face
	cout << "\nSurface Area of the entire cube = " << SurfaceTotal;	//Outputting total surface area
	cout << "\nVolume of the cube = " << Volume;	//Outputting volume
	return 0;
}
