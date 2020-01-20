#include <iostream>
using namespace std;

int main(){
	int x , y ,quo , re;
	cout << "Compute quotient and remainder : " << endl;
	cout << "---------------------------------" << endl;

	cout << "Input the dividend : ";
	cin >> x;
	cout << "Input the divisor : ";
	cin >> y;

	quo = x/y;
	re = x%y;

	cout << "The quotient of the division is : "<< quo << endl;
	cout << "The remainder of the division is : "<< re << endl;
	return 0;
}
