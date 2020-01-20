#include <iostream>
using namespace std;

int main(){

	float km, mi;
	cout << "Convert kilometers per hour to miles per hour : " << endl;
	cout << "-------------------------------------" << endl;

	cout << "Input the distance in kilometer : ";
	cin >> km;

	mi = km / 1.609;
	cout << "the " << km << " Km./hr. means " << mi << " Miles/hr." ;
	return 0;
}
