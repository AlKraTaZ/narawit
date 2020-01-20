#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	char x;
	cout << "Print code (ASCII code / Unicode code etc.) of a given character : " << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Input a character : " ;
	cin >> x ;
	cout << "The ASCII value of a is: " << int(x) << endl;
	cout << "The character for the ASCII value " << int(x) << " is "<< x << endl;
}
