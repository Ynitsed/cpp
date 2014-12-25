// Calculate the sum of two numbers (improved)
// Calculate Sum
// Kaili Lu
// Last Modified 1-31-13

#include <iostream>
using namespace std;

void main()
{
	int a, b;

	while(true)
	{
		cout << "\t\tThis is a program to calculate the sum of two numbers!\n"
			 << "\t\t                      Kaili Lu                          \n\n";
			 
		cout << "Please enter the first integer number: ";
		cin  >> a; cin.ignore(80,'\n');

		cout << "The first integer you entered is " << a << "\n\nPlease enter the second integer number: ";
		cin  >> b; cin.ignore(80,'\n');

		cout << "The second integer you entered is " << b ;
		cout << "\n\nSo the sum of " << a << " and " << b << " is "<< a+b << "\n\n\n\n";;
	}
}