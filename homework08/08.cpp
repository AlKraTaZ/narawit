#include <iostream>
#include <climits>
using namespace std;

int main(){

	cout << "Check overflow/underflow during various arithmetical operation : " << endl;
	cout << "Range of int is [-2147483648, 2147483647]" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "Overflow the integer range and set in minimum range : "<< INT_MIN  << endl;
	cout << "Increasing from its minimum range : "<< INT_MIN +1 << endl;
	cout << "Product is :1" << endl;
	cout << "Underflow the range and set in maximum range : "<< INT_MAX << endl;
	cout << "Decreasing from its maximum range : "<< INT_MAX -1 << endl;
	cout << "Product is : 0" << endl;

}
