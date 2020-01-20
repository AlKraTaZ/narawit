#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	float side , len , sum;
	cout << "Print the area of a polygon : " << endl;
	cout << "------------------------------" << endl;
	cout << "Input the number of sides of the polygon : ";
	cin >> side;
	cout << "Input the length of each side of the polygon : ";
	cin >> len;

	sum = (pow(len,2)*side) / (4* tan(M_PI/side));
	cout << "The area of the polygon is : " << sum << endl;
}
