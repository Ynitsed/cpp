// This program reads digits as characters and points out the difference between their ASCII value and the digit
// Read digits as characters
// By Kaili Lu
// Last modified 6-24-13

#include <iostream>
using namespace std;

void main(){
	char digit;
	double multiple;

	cout << "\t              This program reads digits as characters and\n"
		 << "\t   points out the difference between their ASCII value and the digit\n"
		 << "\t                             by Kaili Lu\n\n\n";

	while (true){
		cout << "Please give me a digit: ";
		cin  >> digit;   cin.ignore(80,'\n');

		if ( !(digit >= '0' && digit <= '9' ) )
			cout << "\t\'" << digit << "\' is not a digit\n\n";
		else{
			cout << "\tThe ASCII value of \'" << digit << "\' is "
			 	 << int (digit) << " but its value is "
		 		 << digit - '0' << " so 2 * " << digit - '0' << " = " << (digit - '0') * 2 << "\n"
				 << "\tYou try it! Give me a number to multiple " << digit - '0' << " with: ";

			cin  >> multiple;   cin.ignore(80, '\n');
			cout << "\t" << digit << " * "<< multiple << " = " << (digit - '0') * multiple << "\n\n";
		}
	}
}
