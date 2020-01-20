#include <iostream>
using namespace std;
#include <iomanip>

int main (){
	float x , y , sum;
	cout << "Find the third angle of a triangle : " << endl;
	cout << "-------------------------------------" << endl;
	cout << "Input the 1st angle of the triangle : " ;
	cin >> x;
	cout << "Input the 2nd angle of the triangle : " ;
	cin >> y;
	sum = 180 - (x+y);
	cout << "The 3rd of the triangle is : "<< sum << endl;
}
