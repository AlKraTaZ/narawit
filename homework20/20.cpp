#include <iostream>
using namespace std;

int main(){

	float c, h;
	cout << "Convert temperature in Celsius to Fahrenheit : " << endl;
	cout << "--------------------------------------------   " << endl;
	cout << "Input the temperature in Celsius : ";
	cin >> c;

	h = ((c *9)/5) + (32);
	cout << "The temperature in Celsius : " << c << endl;
	cout << "The temperature in Fahrenheit : " << h << endl;
	return 0;
}
