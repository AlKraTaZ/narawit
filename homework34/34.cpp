#include <iostream>
using namespace std;
#include <iomanip>

int main(){

	float x = 25.5, y = 3.5, i = 40.5, j = 4.5, sum;
	cout << "Compute the specified expressions and print the output : " << endl;
	cout << "-------------------------------------------------------- " << endl;

	sum = ((x * y) - (y * y)) / (i - j) ;
	cout << "Result of the expression (" << x << "*" << y << "-" << y << "*" << y << ")" << "/" << "(" << i << "-" << j << ")" << "is : " << sum << endl;
}
