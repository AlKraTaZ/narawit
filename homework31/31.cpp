#include <iostream>
using namespace std;

int main(){
    double x = 0;
	cout << "Check whether a number is positive, negative or zero : " << endl;
	cout << "----------------------------------------------------" << endl;
	cout << " Input a number: ";
    cin >> x;
    if(x > 0)
    {
        cout << " The entered number is positive." << endl;
    }
    else if(x < 0)
    {
        cout << " The entered number is negative." << endl;
    }
    else
    {
        cout << " The number is zero.\n" << endl;
    }

}
