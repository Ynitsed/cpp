#include <iostream>
using namespace std;

void printTitle();
// PreCond: None
// PosCond: print the banner tell the user what the program do and who's the author

void printAlpha( char s='A', char e='Z', int perLine=5 );
// PreCond: None
// PosCond: print alphabet from a s to e , n per line, the deafult is 5 perline, starting from A to Z

char getYorN();
// PreCond: NONE
// PosCond: Gets and validate if the input is Y(Yes) or N(No), and remove the rest things in cin

char getLetter();
// PreCond: None
// PosCond: Gets and returns a valid latter and  removes everything left in cin  

bool isUpper( char ch );
// PreCond: None
// PosCond: Return true when the input is an upper letter and return false when it's a lower case  

char getSameCase( char ch );
// PreCond: None
// PosCond: Gets and returns a letter same case as s; removes anything left in cin

char getUpper();
// PreCond: None
// PosCond: Gets and returns an upper case letter and removes everything left in cin

char getLower();
// PreCond: None
// PosCond: Gets and returns an lower case letter and removes everything left in cin

char getBiggerLetter( char s );
// PreCond: None
// PosCond: Return a valid letter that is the same case and after the s.

double getNum();
// PreCond: None
// PosCond: Gets and returns a valid number, then remove the rest things in cin, does not crash for non-numeric input

int getIntNum();
// PreCond: None
// PosCond: Gets and returns and valid integer, then remove the rest things in cin, does not crash for non-numeric input