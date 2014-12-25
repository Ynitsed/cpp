//  PrintPerfectSquaresNPerLine
// Print Perfect Squares
// Kaili Lu
// Last Modified 7-7-13

#include <iostream>
using namespace std;

void main (){
	int limit, line;

	cout << "\tPrint the perfect squares up to a user defined limit\n"
		 << "\t\tUses for and conditional operator.\n"
		 << "\t\t\tBy Kaili Lu";

	while(true) {
		cout << "\n\nWhat is the limit: ";
		cin >> limit;   cin.ignore(80, '\n');
		cout << "How many perfect squares would you like per line: ";
		cin >> line;   cin.ignore(80, '\n');

		for ( int i = 1 ; i*i <= limit; i++ )
			cout << i*i << "\t" << ( i%line != 0 ? "" : "\n");
	}
}