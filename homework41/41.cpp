#include <iostream>
using namespace std;
#include <iomanip>

int main(){

	float r ,sph, pi = 3.14159;
	cout << "Calculate the volume of a sphere : " << endl;
	cout << "-----------------------------------" << endl;
	cout << "Input the radius of a sphere : " ;
	cin >> r;
	sph = (pi * r * r * r * 4)/3;
	cout << "The volume of a sphere is : " << sph << endl;
}
