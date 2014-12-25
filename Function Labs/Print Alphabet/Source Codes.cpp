#include <iostream>
#include "Function Headers.h"
using namespace std;


void printTitle() {
	cout << "\tLab on Optional Arguments\n"
		<< "\t      by Kaili Lu";
}

void printAlpha( char s, char e, int perLine ) {
	for ( int j = 1; s <= e; j++ )
		cout << s++ << ( j % perLine == 0 ? "\n" : "\t");
}

char getYorN() {
	char input;
	cin >> input;   cin.ignore(80, '\n');
	while ( input != 'Y' && input != 'y' && input != 'N' && input != 'n' ) {
		cout << "Please type Y or N. Try again: ";
		cin >> input;   cin.ignore(80, '\n');
	}
	return input == 'y' || input == 'Y';
}

char getLetter() {
	char input;
	cin >> input; cin.ignore(80, '\n');
	while ( ( input < 'a' || input > 'z' ) && ( input < 'A' || input > 'Z' ) ) {
		cout << "\'" << input << "\' is not a letter! Please enter a letter: ";
		cin >> input; cin.ignore(80, '\n');
	}
	return input;
}

bool isUpper( char ch ) {
	return ch >= 'A' && ch <= 'Z';
}

char getBiggerLetter( char s ) {
	char input = getSameCase(s);
	while ( input <= s ) {
		cout << "\tEnd letter must be after than starting letter.\n\tTry again: ";
		input = getSameCase(s);
	}
	return input;
}

char getUpper() {
	char input = getLetter();
	while ( input >= 'a' && input <= 'z')
	{
		cout << "\tPlease enter an UPPER case letter. Try again: ";
		input = getLetter();
	}
	return input;
}

char getLower() {
	char input = getLetter();
	while ( input >= 'A' && input <= 'Z')
	{
		cout << "\tPlease enter an LOWER case letter. Try again: ";
		input = getLetter();
	}
	return input;
}

char getSameCase( char ch ) {
	if ( isUpper(ch) )   // no while
		return getUpper();
	return getLower();
}

double getNum() {
	double input;
	while ( !( cin >> input ) )
	{
		cin.clear(); cin.ignore(80, '\n');
		cout << "Numbers only please. Try again: ";
	}
	cin.ignore(80, '\n');
	return input;
}

int getIntNum() {
	double input = getNum();
	while ( input != int (input) ) {
		cout << "\tYour number is not an integer!\n\tTry again: ";
		input = getNum();
	}
	return int (input);
}