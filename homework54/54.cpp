#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	float x , sum;
	cout << "Print the area of a hexagon : " << endl;
	cout << "------------------------------" << endl;
	cout << "Input the side of the hexagon : " ;
	cin >> x;
	sum = (3 * sqrt(3) * pow(x,2))/2;
	cout << "The area of the hexagon is : " << sum << endl;
}
