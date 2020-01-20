#include <iostream>
using namespace std;

int main(){

	float c, h;
	cout << "Convert temperature in Fahrenheit to Celsius : " << endl;
	cout << "--------------------------------------------   " << endl;
	cout << "Input the temperature in Fahrenheit : ";
	cin >> h;

	c = ((h-32)*5)/9;
	cout << "The temperature in Fahrenheit : " << h << endl;
	cout << "The temperature in Celsius : " << c << endl;
	return 0;
}
