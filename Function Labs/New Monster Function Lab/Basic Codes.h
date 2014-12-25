#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printTitle();
// PreCond: none
// PosCond: prints banner

void printMenu();
// PreCond: none
// PosCond: prints menu

double getNum();
// PreCond: none
// PosCond: validate if input is a number or non-numeric values, and remove the rest of things in cin

int getIntNum();
// PreCond: none
// PosCond: validate if the number form the function getNum() is an integer or double, and remove the rest of things in cin

double getNumInRange (double a, double b);
// PreCond: none
// PosCond: get a number from user, and validate if the number is between the starting point and the ending point. and remove the rest of things in cin

int getIntInRange (int a, int b);
// PreCond: none
// PosCond: get an integer from user, and validate if the number is between the starting point and the ending point, and remove the rest of things in cin

double averageSet ( double input );
//PreCOnd: all input must be positive
//PosCond: calculate the average of a set of numbers

char getLetter();
// PreCond: none
// PosCond: get a value from user and validate if it is a letter, and remove the rest of things in cin

int getInt();
// PreCond: none
// PosCond: get an integer from user, and validate if the number is an integer, remove everything else from the buffer

bool isPrime( int a);
// PreCond: none
// PosCond: get a value from user and validate if it is a prime number ( true is prime, false is not prime ), and remove the rest of things in cin

int getPrime();
// PreCond: Must be an integer
// PosCond: Give out a prime number

int getIntBiggerThan(double b);
// PreCond: none
// PosCond: get an integer and validate if it is bigger than another given integer. and remove the rest of things in cin

double getNumBiggerThan( double a );
// PreCond: none
// PosCond: get an number and validate if it is bigger than another given number. and remove the rest of things in cin

void printAsciiTable( int x);
// PreCond: none
// PosCond: get a number from the function getIntInRange(int s, int e), and print the ASCII table with the given number each line

int classifyDPA(int i);
     // PreCond: none
     // PosCond: get a value from user and validate if it is deficient (-1), perfect (0), or abundant (1)

string suffix(int x);
// PreCond: none
// PosCond: get a number from cin and print the correct suffix for this number