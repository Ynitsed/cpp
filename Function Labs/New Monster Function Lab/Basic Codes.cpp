#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printTitle() {              // DONE
	cout << "\n\t Sample Monster Function Lab (while, for, switch)"
		<< "\n\t         Includes review of switch as menu"
		<< "\n\t   Function resuability and \"slave\" functions"
		<< "\n\t                    By Kaili Lu\n\n";
}

void printMenu() {             // DONE
	cout << "\t1] Average a set of non-negative numbers (sentinel)\n"
		<< "\t2] Enter a number in a given range\n"
		<< "\t3] Enter a letter\n"
		<< "\t4] Enter an integer\n"
		<< "\t5] Enter a prime number\n"
		<< "\t6] Classify a number as deficient, perfect or abundant\n"
		<< "\t7] Print the ASCII table\n"
		<< "\t8] End the program\n\n";
}

string suffix(int i){             // DONE
	switch ( i % 10  ){
	case 1  : return (i%100 == 11 ? "th" : "st");   break;
	case 2  : return (i%100 == 12 ? "th" : "nd");   break;
	case 3  : return (i%100 == 13 ? "th" : "rd");   break;
	default : return "th";
	}
}

double getNum (){             // DONE
	double input;
	while ( !( cin >> input ) ) {
		cin.clear (); cin.ignore( 80 , '\n');
		cout << "\tPlease no inappropriate characters! " << endl
			<< "\tTry again: ";
	}
	cin.ignore (80,'\n');
	return input;
}

int getIntNum(){             // DONE
	double input = getNum();
	while ( input != int (input) ) {
		cout << "\tYour Number is not an integer!" << endl
			<< "\tTry again: ";
		input = getNum();
	}
	return int(input);
}

double getNumBiggerThan( double a ) {             // DONE
	double input = getNum();
	while (input < a) {
		cout << "\tMust be greater than " << a << endl << "\tTry again: ";
		input = getNum();
	}
	return input;
}

double getNumInRange( double a , double b ){            // DONE
	double input = getNum();
	while ( input < a || input > b) {
		cout << "\tYour number must be " 
			<< ( input < a ? "greater " : "less ")  << "or equal than "
			<< ( input < a ? a : b ) << endl
			<< "\tTry again: ";
		input = getNum();
	}
	return input;
}

int getIntInRange( int a , int b ){            // DONE
	int input = getIntNum();
	while ( input < a || input > b) {
		cout << "\tYour number must be " 
			<< ( input < a ? "greater " : "less ")  << "or equal than "
			<< ( input < a ? a : b ) << endl
			<< "\tTry again: ";
		input = getIntNum();
	}
	return input;
}

char getLetter() {            // DONE
	char c;
	cin >> c;   cin.ignore(80, '\n');
	while ( !(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') ) {
		cout << "\'" << c << "\' is not a letter!";
		cout << "\nPlease enter a letter: ";
		cin >> c;	cin.ignore(80, '\n');
	}
	return c;
}

int getInt() {          // DONE
	double input= getNum();
	while ( input != (int)input ) {
		cout << input << " is not an integer, please enter an integer: ";
		input = getNum();
	}
	return int(input);
}

int getIntBiggerThan(double b) {          // DONE
	int input = getIntNum();
	while ( input < b) {
		cout <<"Please enter an integer bigger than " << b << ": ";
		input = getIntNum();
	}
	return input;
}

bool isPrime( int a ) {          // DONE
	for ( int i = 2; i < a; i++)
		if ( a % i == 0 ) return false;
	return true;
}

int getPrime() {          // DONE
	int x = getIntBiggerThan(2);
	while ( !isPrime( x ) ) {
		cout << x << " is not prime! Try again: ";
		x = getIntBiggerThan(2);
	}
	return x;
}

void printAsciiTable(int x) {	          // DONE
	char ch;

	for (int i = 0, tab = 1; i <= 255; i++) {
		cout << setw(6) << i << setw(6);
		switch (ch = char (i) ) {
		case '\a': cout << " \\a";   break;
		case '\b': cout << " \\b";   break;
		case '\n': cout << " \\n";   break;
		case '\r': cout << " \\r";   break;
		case '\\': cout << " \\";   break;
		case '\'': cout << "\\\'";   break;
		case '\"': cout << " \\\"";   break;
		case '\0': cout << "NULL";   break;
		case '\t': cout << " \\t";   break;
		case '\v': cout << " \\v";   break;
		default:   cout << ch;
		}
		cout << setw(6) << ( tab++ % x == 0 ? "\n":"||  ");
	}
}

int classifyDPA(int x) {   //  DONE
	int sum = 0;
	for (int i = 1; i < x; i++ )
		if ( x%i == 0 )	sum += i;

	if (sum == x)	return 0;
	else if (sum < x)	return -1;
	else	return 1;
}