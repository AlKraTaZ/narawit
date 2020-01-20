#include <iostream>
using namespace std;
#include <cmath>

int main(){

	float L, x, y, z, area;
	cout << "Find the Area and Perimeter of a Rectangle : " << endl;
	cout << "---------------------------------------------" << endl;

	cout << "Input the length of 1st side of the triangle :  " ;
	cin >> x;
	cout << "Input the length of 2nd side of the triangle :  " ;
	cin >> y;
	cout << "Input the length of 3rd side of the triangle :  " ;
	cin >> z;

	L = (x+y+z)/2;
	area = sqrt(L*((L-x)*(L-y)*(L-z)));
	cout << "The area of the rectangle is : " << area << endl;
	return 0;
}
