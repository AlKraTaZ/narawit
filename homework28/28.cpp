#include <iostream>
#include <cmath>
using namespace std;

int main(){

	float x, y, z, area;

	cout << "Find the area of Scalene Triangle : " << endl;
	cout << "---------------------------------------------" << endl;

	cout << "Input the length of a side of the triangle :   " ;
	cin >> x;
	cout << "Input the length of another side of the triangle :   " ;
	cin >> y;
	cout << "Input the angle between these sides of the triangle :   " ;
	cin >> z;

	area = (x * y * sin((M_PI/180)*z))/2;
	cout << "The area of the rectangle is : " << area << endl;

}
