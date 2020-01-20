#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double x = 3.14159265 ;
	cout << setprecision(4) << fixed;

	cout <<"Formatting the output : " << endl;
	cout <<"------------------------" << endl;

	cout <<"The value of pi : " << x << endl;
	cout <<"The value of pi 4 decimal place of total width 8 :  |" << setw(8) << x << "|" <<endl;
	cout <<"The value of pi 4 decimal place of total width 10 : |" << setw(10) << x << "|" <<endl;

	cout << setfill ('-');
	cout <<"The value of pi 4 decimal place of total width 8 :  |" << setw(8) << x << "|" <<endl;
	cout <<"The value of pi 4 decimal place of total width 10 : |" << setw(10) << x << "|" <<endl;

	cout << scientific;
	cout << "The value of pi in scientific format is : " << x << endl;

	bool i = false;
	cout << "Status in number : " << i << endl;
	cout << boolalpha;
	cout << "Status in alphabet : " << i << endl;
	return 0;

}
