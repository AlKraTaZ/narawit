#include <iostream>
using namespace std;
#include <iomanip>

int main(){

	int x = 1, y = 2 ;
	double i = 1.1, j = 2.2;
	cout << "Formatting the output using type casting : " << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Print floating-point number in fixed format with 1 decimal place:" << endl;
	cout << "Test explicit type casting :" << endl;
	cout << fixed << setprecision(1);

	cout << x/y << endl;
	cout << (double)x/y << endl;
	cout << x/(double)y << endl;
	cout << (double)(x/y) << endl;
	cout << "Test implicit type casting : " << endl;
	cout << (int)i/y  << endl;
	cout << (int)j/y  << endl;
	cout << "int implicitly casts to double:" << endl;
	i=x;
	cout << i << endl;
	cout << "double truncates to int!:" << endl;
	y=j;
	cout << y << endl;
}
