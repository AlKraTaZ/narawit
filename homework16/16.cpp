#include <iostream>
using namespace std;

int main(){

	float x, y, z;
	cout << "Calculate the volume of a cylinder : " << endl;
	cout << "-------------------------------------" << endl;
	cout << "Input the radius of the cylinder : ";
	cin >> x;
	cout << "Input the height of the cylinder : ";
	cin >> y;

	z = 3.14 * x * x * y;

	cout << "The volume of a cylinder is : "<< z << endl;
	return 0;

}

