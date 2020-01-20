#include <iostream>
using namespace std;

int main(){

	int x, y, z;
	cout << "Swap two number : " << endl;
	cout << "------------------------" << endl;

	cout << "Input 1st number : " ;
	cin >> x ;
	cout << "Input 2nd number : " ;
	cin >> y ;

	z=y;
	y=x;
	x=z;

	cout << "After swapping the 1st number is : " << x << endl;
	cout << "After swapping the 2nd number is : " << y << endl;

}

