// Monster Function Lab
// Monster
// Kaili Lu
// 7-25-13

#include <iostream>
#include <iomanip>
#include <string>
#include "Basic Codes.h"
using namespace std;

int main() {
	int choice, input, i, total;
	double a,b,c;
	char ch;
	int x;

	while(true) {
		system("cls");
		printTitle();
		printMenu();
		system("color 0A");

		cout << "Please enter your choice: ";
		switch ( choice = getIntInRange(1,8) ) {
		case 1:		               // DONE
			input = i = total = 0;
			while ( input >= 0 ) {
				i++;
				cout << "Please enter the " << i << suffix(i) << " number: ";
				total += input;
				input = getIntNum();
			}
			if ( i == 1)	cout << "There are no data to find the average of";
			else			cout << "The average of the numbers is " << total / (i-1);
			break;

		case 2:	               // DONE
			cout << "Start?: ";
			a = getNum();
			cout << "End?: ";
			b = getNumBiggerThan(a);
			cout << "\nPlease enter a number between " << a << " and " << b << ": ";
			c = getNumInRange (a, b);
			cout << "Your number is " << c;   break;

		case 3:	              // DONE
			cout << "\nPlease give me a letter: ";
			ch = getLetter() ;
			cout << "Your letter is " << ch ;   break;

		case 4:              // DONE
			cout << "\nPlease enter an integer: ";
			a = getInt();
			cout << a << " is an integer!";	  break;

		case 5:               // DONE
			cout << "\nPlease enter a prime number: ";
			x = getPrime();
			cout << x << " is a prime!";   break;

		case 6:              // DONE
			cout << "\nPlease enter a number: ";
			x = getIntBiggerThan(0);
			cout << x << " is ";
			switch ( classifyDPA (x) ){
			case -1 : cout << "deficient\n";   break;
			case 0: cout <<"perfect\n";   break;
			case 1: cout <<"abundent\n";
			}
			break;

		case 7:              // DONE
			cout << "\nHow many characters would you like to print per line? [1,4]: "; // fix your design
			x = getIntInRange(1,4);
			printAsciiTable(x);   break;

		case 8:               // DONE
			cout << "\nThank you for using our program. \n\n" ;   system("pause");   return 0; 
		}
		cout << endl << endl;
		system("pause");
	}// while (true)
}//main
