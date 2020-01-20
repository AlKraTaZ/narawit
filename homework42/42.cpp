#include <iostream>
using namespace std;
#include <iomanip>

int main(){

	float x , cube;
	cout << "Calculate the volume of a cube  : " << endl;
	cout << "-----------------------------------" << endl;
	cout << "Input the side of a cube : " ;
	cin >> x;
	cube = x * x * x;
	cout << "The volume of a cube is  : " << cube << endl;
}
