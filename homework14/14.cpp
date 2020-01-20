#include <iostream>
using namespace std;
#include <cmath>
int main(){
    	int r;
    	float sum;

		cout << "Calculate the volume of a sphere:" << endl;
		cout << "-------------------------------" << endl;
        cout<<"Input the radius of a sphere:";

    	cin>>r;
    	sum=(4*3.14*pow(r,3))/3;

        cout<<"The volume of a sphere is:"<< sum << endl;
        return 0;

}
