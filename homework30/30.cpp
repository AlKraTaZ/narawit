#include <iostream>
using namespace std;

int main(){

	float x1, x2, y1, y2, total, avg;
	cout << "Compute the total and average of four numbers : " << endl;
	cout << "------------------------------------------------" << endl;

	cout << "Input 1st two numbers (separated by space) : ";
	cin >> x1 >>x2;
	cout << "Input last two numbers (separated by space) : ";
	cin >> y1 >>y2;

	total = x1+x2+y1+y2;
	avg = (x1+x2+y1+y2)/4;

	cout << "The total of four numbers is : "<< total << endl;
	cout << "The average of four numbers is : " << avg << endl;
	return 0;
}
