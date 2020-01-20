#include <iostream>
using namespace std;
#include <iomanip>

int main(){

	float x, y , area , peri;
	cout << "Print the area and perimeter of a rectangle :" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Input the width of the rectangle : " ;
	cin >> x;
	cout << "Input the height of the rectangle : " ;
	cin >> y;
	area = x*y;
	peri = 2 *(x+y);
	cout << "The area of the rectangle is : " << area<< endl;
	cout << "The perimeter of the rectangle is : " << peri<< endl;
}
