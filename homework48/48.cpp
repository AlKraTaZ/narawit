#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	float x, y;
	cout << "Convert kilometers per hour to miles per hour : " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Input the distance in kilometer : " ;
	cin >> x;
	y = x / 1.609;
	cout << "The " << x << " Km./hr. means " << y << " Miles/hr." << endl;
}
