#include <iostream>
using namespace std;
#include <cmath>
int main(){
	float x, area;
	cout << "Calculate the area of the Equilateral Triangle  " << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Input the value of the side of the equilateral triangle: " ;
	cin >> x;
	area = (sqrt(3)* x * x )/4;
	cout << "The area of equilateral triangle is : " << area << endl;
	return 0;
}
