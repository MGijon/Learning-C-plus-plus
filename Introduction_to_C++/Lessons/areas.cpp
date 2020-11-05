// Program to compute the area of a circle and the area of a sphere from a given radius.
#include <iostream>
using namespace std;

int main(){
	float Radio;
	float Pi = 3.141592;

	cout << "Introduce the radio: " << endl;
	cin >> Radio;
	
	float CircleArea;
	float SphereArea;

	CircleArea = Radio * Radio * Pi;
	SphereArea = 4 * Pi * Radio * Radio;

	cout << "Area circle " << CircleArea << endl;
	cout << "Area sphere " << SphereArea << endl;

	return 0;
}	
