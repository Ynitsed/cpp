// Read letters and find the position in the alphabet
// Find the order of letters
// Kaili Lu
// Last modified 6-24-13

#include <iostream>
using namespace std;

void main()
{
	char input;
	int orderNumber;

	cout << "\n\t   This program reads letters and"
		 << "\n\tfinds their position in the alphabet"
		 << "\n\t         by Kaili Lu\n";

	while (true) {
		cout << "\n\nPlease give me a letter: ";
		cin  >> input;   cin.ignore(80, '\n');

		if ( ! ( input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z' ) )
			cout << "\t\'" << input << "\' is NOT a letter" ;
		else {
			if ( input >= 'a' && input <= 'z' )
				orderNumber = input-'a'+1;
			else
				orderNumber = input-'A'+1;

			cout << "\t\'" << input << "\' is the " << orderNumber;
			switch (int ( orderNumber % 10 ) ){
			case 1  : cout << ( orderNumber%100 == 11 ? "th" : "st");   break;
			case 2  : cout << ( orderNumber%100 == 12 ? "th" : "nd");   break;
			case 3  : cout << ( orderNumber%100 == 13 ? "th" : "rd");   break;
			default : cout << "th";
			}
			cout << " letter of the alphabet\n";
		}
	}
}





