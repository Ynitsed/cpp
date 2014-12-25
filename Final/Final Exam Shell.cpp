// This program reads whole numbers and a base from a file and converts correctly converts them to decimal
// Final exam shell
// Programmer: H. Delta
// Last Modified: Date 05/06/2013

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int logicalSize( /*takes one argument - a character array*/ );
	// Pre-cond:  a[] is a well formed character array
	// Post-cond: returns the logical size of a[]
bool isValidBase( /* takes two arguments, both integers*/ );
	// Pre-cond:  None
	// Post-cond: Returns true if 2 <= base <= lim
void printTitle(/* takes one argument a stream */ );
	// Pre-cond:  None
	// Post-cond: Prints a nice centered descriptive title
bool isValidNumInB( /* takes two arguments a character array and an iteger */ );
	// Pre-cond:  None
	// Post-cond: Returns true if num[] does not contain any illigal digits for the given base
int baseToDec( /* takes two arguments a character array and an integer */ );
	// Pre-cond:  num[] is a well formatted character array, 
	//            num[] contains only valid digits in base b
	// Post-cond: Returns the equivelent in decimal
int myPow( /* takes two arguments b and e */ );
	// Pre-cond:  b and e can not be simultaneusly 0
	// Post-cond: returns b^e
void connectFile( /* takes three arguments - an input stream, a character array and an iteger*/ );
	// Pre-cond:  User was prompted, fNameSize <= physical size of fName[]
	// Post-cond: Makes sure "is" is now connected to fName
bool connectFile( /* takes three arguments - an output stream, a character array and an iteger*/ );
	// Pre-cond:  User was prompted
	// Post-cond: returns true if "os" is connected, false otherwise
void toUpper( /* takes one argument - a character array */ );
	// Pre-cond:  a[] is a well formed character array
	// Post-cond: any letter in a[] is now capitalized, any other characters are left unchanged
int digitToValue( /* takes one argument - a character */ );
	// Pre-cond:  "d" is 0, ..., 9, A, ... Z
	// Post-cond: Returns the corresponding value of that digit
void getFileName( /* takes two arguments a character array and and integer */ );
	// Pre-cond:  "size" <= to the physical size of fName[]
	// Post-cond: reads the filename after skipping any initial white space, is able to read file names with spaces,
	//            removes any trailing white space, and periods, appends ".txt" if the inputed file name does not have one
void myAppend ( /* takes two arguments - both character arrays */ ) ;
	// Pre-cond:  There is room in s1[] to fit s2[]
	// Post-cond: s2[] is appended after s1[]
bool hasExt( /* takes one argument - a character array */ );
	// Pre-cond:  a[] is a well formatted character array
	// Post-cond: returns true it there is an extension (character after '.')
void cleanTrailWhiteAndDot( /* takes one argument - a character array */ );
	// Pre-cond:  a[] is a well formatted character array
	// Post-cond: removes any white space and periods at the end of a[]
void printResult( /* takes three arguments a character array, an int and a stream */ );
	// Pre-cond:  number[] is a well formatted character array
	// Post-cond: Prints the results to "os" in a prose fashion (including errors)
void printInTable( /* takes three arguments a character array, an int and a stream */ );
	// Pre-cond:  number[] is a well formatted character array
	// Post-cond: Prints the results to "os" in a table fashion (including errors)