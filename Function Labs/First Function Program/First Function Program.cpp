/*My first Function Lab
Print Banner
Kaili Lu
Last Modified 4/2/13*/

#include <iostream>
using namespace std;

void printTitle();
double absolute(double x);

void main()
{
	double x;

	printTitle();

	while(true){
		cout << "Give me a number: ";
		cin  >> x;   cin.ignore(80, '\n');

		cout << "\nThe absolute number of " << x << " is " << absolute(x) << "\n\n";
	}
}

void printTitle(){
	cout << "\n\tPrint a absolute number of what you entered"
		 << "\n\t               Kaili Lu\n\n\n";
}

double absolute(double x){
	return ( x>0 ? x : -x);	
}