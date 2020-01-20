#include <iostream>
using namespace std;
#include <iomanip>

int main(){

	float pi = 3.14159, r , area, circum;
	cout << "Find the area and circumference of any circle : " <<endl;
	cout << "------------------------------------------------" <<endl;
	cout << "Input the radius(1/2 of diameter) of a circle : " ;
	cin >> r;
	area = pi * r * r;
	circum =  pi * 2 * r;
	cout << "The area of the circle is : " << area << endl;
	cout << "The circumference of the circle is : "<< circum << endl;
}
