#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	float x , kilo , meter;
	cout << "Convert centimeter into meter and kilometer : " << endl;
	cout << "---------------------------------------" << endl;
	cout << "Input the distance in centimeter : " ;
	cin >> x;
	meter = x / 100;
	kilo = meter / 1000;
	cout << "The distance in meter is: "  << meter << endl;
	cout << "The distance in kilometer is: " << kilo << endl;
}
