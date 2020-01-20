#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float x , y , sum;
	int t;
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
}
