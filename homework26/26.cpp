#include <iostream>
using namespace std;

int main(){

	float f, k;
	cout << "Convert temperature in Fahrenheit to Kelvin : " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Input the temperature in Fahrenheit : ";
	cin >> f;

	k = ((((f-32)*5)/9)+273.15);
	cout << "The temperature in Fahrenheit : " << f << endl;
	cout << "The temperature in Kelvin : " << k << endl;
	return 0;
}
