#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x = 5, y = 7;
	double i = 3.7, j = 8.0;
	cout << setprecision(1) << fixed;

	cout << "Display arithmetic operations with mixed data type: " << endl;
	cout << "----------------------------------------------------" << endl;

	cout << x << " + " << y << " = " << x+y << endl;
	cout << i << " + " << j << " = " << i+j << endl;
	cout << x << " + " << j << " = " << x+j << endl;
	cout << endl;
	cout << x << " - " << y << " = " << x-y << endl;
	cout << i << " - " << j << " = " << i-j << endl;
	cout << x << " - " << j << " = " << x-j << endl;
	cout << endl;
	cout << x << " * " << y << " = " << x*y << endl;
	cout << i << " * " << j << " = " << i*j << endl;
	cout << x << " * " << j << " = " << x*j << endl;
	cout << endl;
	cout << x << " / " << y << " = " << x/y << endl;
	cout << i << " / " << j << " = " << i/j << endl;
	cout << x << " / " << j << " = " << x/j << endl;
	cout << endl;
	return 0;
}

