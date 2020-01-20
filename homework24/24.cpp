#include <iostream>
using namespace std;

int main(){

	float k, h;
	cout << "Convert temperature in Kelvin to Fahrenheit : " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Input the temperature in Kelvin : ";
	cin >> k;

	h = ((((k-273.15)*9)/5)+32);
	cout << "The temperature in Kelvin : " << k << endl;
	cout << "The temperature in Fahrenheit : " << h << endl;
	return 0;
}
