#include <iostream>
using namespace std;

int main(){

	float k, c;
	cout << "Convert temperature in Kelvin to Celsius : " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Input the temperature in Kelvin : ";
	cin >> k;

	c = (k-273.15);
	cout << "The temperature in Kelvin : " << k << endl;
	cout << "The temperature in Celsius : " << c << endl;
	return 0;
}
