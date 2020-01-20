#include <iostream>
using namespace std;
#include <iomanip>

int main(){

	float pi = 3.14159, r ,h, vol;
	cout << "Calculate the volume of a cylinder : " <<endl;
	cout << "------------------------------------------------" <<endl;
	cout << "Input the radius of the cylinder : " ;
	cin >> r;
	cout << "Input the height of the cylinder : " ;
	cin >> h;
	vol = pi * r * r * h ;
	cout << "The volume of a cylinder is : " << vol << endl;
}
