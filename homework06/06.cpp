#include <iostream>
using namespace std;
#include <climits>

int main(){

	int x , y = INT_MAX, z = INT_MIN ;
	cout << "Check limit of Int" << endl;
	cout << "Check Int data : " ;
	cin >> x;

	if (x <= z){
		cout << "TOO LOW" ;
	}
	else if (x >= y){
		cout << "TOO MUCH" ;
	}
	else {
		cout << "OK..." ;
	}

}
