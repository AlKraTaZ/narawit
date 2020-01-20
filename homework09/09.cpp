#include <iostream>
using namespace std;

int main(){
	int x = 57;
	cout << "Display the operation of pre and post increment and decrement: " << endl;
	cout << "------------------------------------" << endl;
	cout << "The number is : " << x << endl;
	x++ ;
	cout << "After post increment by 1 the number is : " << x << endl;
	x++ ;
	cout << "After pre increment by 1 the number is : " << x << endl;
	x++ ;
	cout << "After increasing by 1 the number is : " << x << endl;
	x-- ;
	cout << "After post decrement by 1 the number is : " << x << endl;
	x-- ;
	cout << "After pre decrement by 1 the number is : " << x << endl;
	x-- ;
	cout << "After decreasing by 1 the number is : " << x << endl;
	return 0;
}

