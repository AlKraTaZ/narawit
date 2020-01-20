#include <iostream>
using namespace std;

int main(){

	float x, y, area, peri;

	cout << "Find the Area and Perimeter of a Rectangle : " << endl;
	cout << "---------------------------------------------" << endl;

	cout << "Input the length of the rectangle : " ;
	cin >> x;
	cout << "Input the width of the rectangle : " ;
	cin >> y;

	area = x*y;
	cout << "The area of the rectangle is : " << area << endl;

	peri = (x+y)*2;
	cout << "The perimeter of the rectangle is : " << peri << endl;
	return 0;
}

