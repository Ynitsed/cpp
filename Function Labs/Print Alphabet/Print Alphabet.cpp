// Print out the alphabet
// Print Alphabet
// Kaili Lu
// Last 8-7-13

#include <iostream>
#include "Function Headers.h"
using namespace std;

void main(){
	char choice, s, e, junk;
	int perLine;

	printTitle();
	//----------A-Z----------//
	cout << "\n\nCalling \"printAlpha()\""
		 << "\n\tPrinting from A to Z, 5 charaters per line: \n";
	printAlpha();
	//----------T-Z----------//
	cout << "\n\nCalling \"printAlpha(\'T\')\""
		 << "\n\tPrinting from T to Z, 5 charaters per line: \n";
	printAlpha('T');
	//----------C-W----------//
	cout << "\n\nCalling \"printAlpha(\'C\',\'W\')\""
	 	 << "\n\tPrinting from C to Z, 5 charaters per line: \n";
	printAlpha('C', 'W');
	//----------D-Y-3---------//
	cout << "\n\nCalling \"printAlpha(\'D\',\'Y\',3)\""
		 << "\n\tPrinting from D to Y, 3 charaters per line: \n";
	printAlpha('D', 'Y', 3);

	//----------PART 2 ---------//
	cout << "\n\nDo you want to choose the arguments? ";

	while ( getYorN() ) {
		cout << "\nPeoples' choice! ;)\n\tEnter the starting letter: ";
		s = getLetter();
		cout << "\tEnter the ending letter: ";
		e = getBiggerLetter( s );
		cout << "\tHow many letters do you want me to print per line\n\t "
			<< "(if you hit ENTER I will use the default value): ";
		junk = cin.get();

		if ( junk == '\n' ) perLine = 5;
		else {
			cin.putback(junk);
			perLine = getIntNum();
		}
		printAlpha( s, e, perLine );

		cout << "\n\nDo you want to choose the arguments? ";
	}

	cout << "\nThank you for printing with us!\n\n";
	system("pause");
}
