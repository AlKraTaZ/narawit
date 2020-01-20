#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b ,i;
	cout << "Print a prime series:" << endl;
	cout << "---------------------" << endl;
	cout << "Enter a maximum number :";
	cin >> b;
	cout<< "The numbers are :" << endl;
	for(a=2;a<=b;++a){
	    for(i=2;i<=a-1;i++){
	        if(a%i == 0)
	            break;
	    }
	    if(i==a && i != 2)
	        cout<< "[" << a << "]" ;
	}
}
