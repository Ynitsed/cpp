// Monster Lab
// Function Lab with a menu
// Kaili Lu
// Last Modified 7-22-13

#include <iostream>
#include <iomanip>
#include "Functions.h"
using namespace std;

int main () {
	double choice, a, b;

	while (true) {
		system("CLS");
		printTitle();
		cout << "\n";
		menu();

		cout << "\n Please enter your choice ";
		choice = getInRange(1 , 8);

		switch ((int)choice) {
		case 1:	cout << "The average of your set is " << averageSet(a); 
					cin.get(); break;

		case 2:	cout << "Please give me the first number: ";
			    a = getNum();
			    cout << "Please give me the second number: ";
			    b = getNum();
			    cout << "a number between " << a << " and " << b << " is " << getInRange( a , b ); 
				cin.get(); break;

		case 3:	cout << " Please give me a letter: ";
			    cout << getLetter() << " is a letter!";   
				cin.get(); break;

		case 4:	cout << "Please enter an integer: ";
			    a = getInt();
			    cout << a << " is an integer!";
				cin.get(); break;

		case 5: enterPrime();   
				cin.get(); break;

		case 6: cout << "Please enter a number and I will tell you if its abundant, deficient, or perfect: ";
			    a = getPosNum();
			    defPerfOrAbun(a); 
				cin.get(); break;

		case 7: printAsciiTable(); 
				cin.get(); break;

		case 8: cout << "Goodbye!"; 
				cin.get(); return 0;
		}
	}
}
