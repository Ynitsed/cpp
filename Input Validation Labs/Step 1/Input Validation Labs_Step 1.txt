// Input Validation Labs
// This is a program demostrates how to use while loop to validate input
// Kaili Lu
// Last Modified 6-26-2013

#include <iostream>
#include <cmath>
using namespace std;

void main() {
	double inputNumber;
	char inputChar;

	cout << "\tThis is a program demostrates how to use while() loop\n"
		 << "\t                 to validate input\n"
		 << "\t                       Kaili Lu\n\n\n";

	while (true) {
		cout << "Part 1 (validate an integer)\n"
			 << "Enter a number: ";
		cin  >> inputNumber;   cin.ignore(80, '\n');

		while ( inputNumber != int (inputNumber) ){    // GOOD
			cout << "\t" << inputNumber << " is NOT an integer. Try again: ";
			cin  >> inputNumber;   cin.ignore(80, '\n');
		}
		cout << "Good! " << inputNumber << " is an integer!\n\n";		
		//------------------------------------------------------------------//Part 1 end
		cout << "Part 2 (validate a multiple of 5)\n"
			 << "Enter a multiple of 5: ";
		cin  >> inputNumber;   cin.ignore(80, '\n');

		while ( inputNumber != int (inputNumber) || int(inputNumber)%5 != 0 ){     // GOOD
			cout << "\t" << inputNumber << " is NOT a multiple of 5. Try again: ";
			cin  >> inputNumber;   cin.ignore(80, '\n');
		}
		cout << "Good! " << inputNumber << " is a multiple of 5!\n\n";
		//------------------------------------------------------------------//Part 2 end
		cout << "Part 3 (validate a letter)\n"
			 << "Enter a letter: ";
		cin  >> inputChar;   cin.ignore(80, '\n');

		while ( !(inputChar >= 'a' && inputChar <= 'z' || inputChar >= 'A' && inputChar <= 'Z') ) {   // GOOD
			cout << "\t" << inputChar << " is NOT a letter. Try again: ";
			cin >> inputChar;   cin.ignore( 80,'\n' );
		}
		cout << "Good! " << inputChar << " is a letter!\n\n";
		//------------------------------------------------------------------//Part 3 end
		cout << "Part 4 (validate a a number between [0, 100]\n"
			 << "Enter a number: ";
		cin  >> inputNumber;   cin.ignore(80, '\n');

		while (inputNumber < 0 || inputNumber > 100) {   // GOOD
			cout << "\t" << inputNumber << " is NOT in the range [0, 100]. Try again: ";
			cin  >> inputNumber;   cin.ignore(80, '\n');
		}
		cout << "Good! " << inputNumber << " is a number between 0 and 100!\n\n";
		//------------------------------------------------------------------//Part 4 end
		cout << "Part 5 (validate a perfect square)\n"
			 << "Enter a perfect square: ";
		cin  >> inputNumber;   cin.ignore(80, '\n');

		while (  inputNumber < 0  || sqrt(inputNumber) != int (sqrt(inputNumber)) ) {     // GOOD
			cout << ( inputNumber < 0 ? "Perfect squares must be positive, so " : "")
				 << inputNumber << " is NOT a perfect square.\n   Try again: " ;			
			cin  >> inputNumber;   cin.ignore(80, '\n');
		}
		cout << "Good! " << inputNumber << " is a perfect square!\n**********************\n\n\n";
		//------------------------------------------------------------------//Part 5 end
	}
}