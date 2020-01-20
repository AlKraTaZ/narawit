#include <iostream>
using namespace std;

int main(){

	float k, c;
	cout << "Convert temperature in Celsius to Kelvin : " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Input the temperature in Celsius : ";
	cin >> c;

	k = (c+273.15);
	cout << "The temperature in Celsius : " << c << endl;
	cout << "The temperature in Kelvin : " << k << endl;
	return 0;
}
