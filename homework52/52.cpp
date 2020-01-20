#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float x , y , t , sum , sum2;
	cout << "Calculate the Simple Interest : " << endl;
	cout << "--------------------------------" << endl;
	cout << "Input the Principle : " ;
	cin >> x;
	cout << "Input the Rate of Interest : " ;
	cin >> y;
	cout << "Input the Time : " ;
	cin >> t;
	sum = ((x*y)/100)*(t);
	cout << "The Simple interest for the amount "<< x <<" for "<< t <<" years "<<" @ "<< y <<" % is : "<< sum << endl;
	sum2 = x+sum;
	cout << "The total amount after compounded for the amount " << x << "for " << t << " years "<< " @ " << y << " % is : " << sum2 << endl;
}
