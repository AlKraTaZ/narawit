#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;
int main(){
	double dis, lat1, lat2, long1, long2 , r , earth = 6371;
	cout << "Print the distance between two points on the surface of earth:" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "Input the latitude of coordinate 1: " ;
	cin >> lat1;
	cout << "Input the longitude of coordinate 1: " ;
	cin >> long1;
	cout << "Input the latitude of coordinate 2: " ;
	cin >> lat2;
	cout << "Input the longitude of coordinate 2: " ;
	cin >> long2;
	r = (M_PI/180);
	lat1 = lat1*r;
	long1 = long1*r;
	lat2 = lat2*r;
	long2 = long2*r;
	dis = earth * acos((sin(lat1)*sin(lat2)) + (cos(lat1)*cos(lat2)*cos(long1-long2))) ;
	cout << "The distance between those points is: " << dis << endl;
}
