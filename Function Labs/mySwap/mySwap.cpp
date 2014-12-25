// My Swap
// Swap numbers
// Kaili Lu
// 7-29-2013

#include <iostream>
using namespace std;

void mySwap(double &b, double &e);

void main(){
	while(true){
	double a, b;

	cout << "\nEnter the first number: ";
	cin >> a;   cin.ignore(80, '\n');
	
	cout << "Enter the second number: ";
	cin >> b;   cin.ignore(80, '\n');
	
	cout << "So the order now is " << a << "\t" << b << "\n";

	mySwap(a,b);
	
	cout << "So the order after swap is " << a << "\t" << b << "\n";

	system("pause");
	}
}

void mySwap(double &b, double &e)
{
	double temp;
	temp = b;
	b = e;
	e = temp;
	return;
}