// This program 
// Fake AI
// Gabriel
// 7/10/2013

#include <iostream>
using namespace std;

void main(){
	// Variables
	int loopInterval;
	double num1, num2, total, numLoops;
	char action;

	// Title Banner
	cout << "\n\t\tFake AI Project"
		 << "\n\t\t  by Kaili Lu\n\n";

	cout << "Please enter in English the arithmetic operation"
		 << " you would like to perform.\nType control Z or "
		 << "control C to end the program.\n\n";
	
	while ( cin ) {
		cout << "\tAction: ";
		cin  >> action;

		if ( action == 'e' || action == 'E' ){
			cin.ignore(80, '\n');
			cout << "About to exit. Press ENTER to terminate.";
			cin.get();
			break;
		}

		else if(!cin)   break;

		else {
			while ( !(cin >> num1) ){
				cin.clear();   cin.ignore();
			}
			while ( !(cin >> num2) ){
				cin.clear();   cin.ignore();
			}
			cin.ignore(80, '\n');

			switch ( action ) {
			case 'a': case 'A': cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; break;
			case 's': case 'S': cout << num2 << " - " << num1 << " = " << num2 - num1 << endl; break;
			case 'm': case 'M': cout << num1 << " * " << num2 << " = " << num1 * num2 << endl; break;
			case 'd': case 'D': cout << num1 << " / " << num2 << " = " << num1 / num2 << endl; break;
			case 'r': case 'R': cout << num1 << "^" << int(num2) << " = ";
				numLoops = ( num2 < 0 ? int (-num2) : int(num2) );
				for ( total = num1, loopInterval = 1; loopInterval < numLoops ; loopInterval++) 
					total *= num1;
				( int(num2)==0 ? total = 1 : total );
				cout << ( num2 < 0 ? 1/total : total ) << endl; break;
			default: cout << "I do not know that function.\n";
			}
		}
	}
}
