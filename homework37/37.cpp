#include <iostream>
using namespace std;
#include <iomanip>

int main(){

	int x, i;
	cout << "Print the multiplication table of a number up to 10 : " << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "Input a number : " ;
	cin >> x;
	for (i=1; i<=10 ; i++){
	cout << x << "x" << i << " = " << x*i<< endl;
	}
}
