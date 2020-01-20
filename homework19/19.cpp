#include <iostream>
#include <cmath>
using namespace std;

int main(){

	float r, area, circum , pi = 3.14159;
	cout << "Find the area and circumference of any circle : " << endl;
	cout << "------------------------------------------------" << endl;


	cout << "Input the radius(1/2 of diameter) of a circle : " ;
	cin >> r;


	area = pi * pow(r,2);
	circum = pi * 2 * r;
	cout << "The area of the circle is : " << area << endl;
	cout << "The circumference of the circle is : " << circum << endl;
	return 0;
}
