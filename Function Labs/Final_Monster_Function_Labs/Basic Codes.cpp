#include <iostream>
#include <iomanip>
#include "Functions.h"
using namespace std;

void printTitle() {
	cout << "\t Sample Monster Function Lab (while, for, switch)\n"
		 << "\t         Includes review of switch as menu\n"
		 << "\t   Function resuability and \"slave\" functions\n"
		 << "\t                    By Kaili Lu\n\n";

}
void menu() {
	cout << "\t1] Average a set of non-negative numbers (sentinel)\n"
		 << "\t2] Enter a number in a given range\n"
		 << "\t3] Enter a letter\n"
		 << "\t4] Enter an integer\n"
		 << "\t5] Enter a prime number\n"
		 << "\t6] Classify a number as deficient, perfect or abundant\n"
		 << "\t7] Print the ASCII table\n"
		 << "\t8] End the program\n\n";
}

double getNum (){
	double a;
	while ( !( cin >> a ) ) {
		cin.clear (); cin.ignore( 80 , '\n');
		cout << "inappropriate input, please give me a number: ";
	}
	cin.ignore (80,'\n');
	return a;
}

double getInRange(double a , double b){
	double c;
	cout << "[" << a << "," << b << "]:";
	c = getNum();
	while ( c < a || c > b) {
		cout << c << " is not in range, please give me a number in range [" << a << "," << b << "]:";
		c = getNum();
	}
	return c;
}

double getPosNum(){
	double y;

	y = getNum();
	while (y < 0) {
		cout << "please enter a positive number: ";
		y = getNum();
	}
	return y;
}

double averageSet(double input) {
	int c = 1;
	double sumal = 0;
	while (input > 0) {
		cout << "please enter the " << c;

		if ( ( c % 10 == 1 ) && !(c == 11) )  
			cout << "st";
		else if (c == 2 || (c % 10 == 2 ) && !(c == 12) ) 
			cout << "nd";
		else if (c == 3 || (c % 10 == 3) && !(c == 13) ) 
			cout << "rd";
		else 
			cout << "th"; 

		cout << " number you would like to average: ";
		sumal += input;
		c++;
		input = getNum();
	}
	return (sumal)/ (c - 2); 
}

char getLetter(){
	char c;
	cout << "please enter a letter";
	cin.get(c);
	while (c > 'a' && c < 'z' || c > 'A' && c < 'Z') {
		cout << "that's not a letter, please give me a letter";
		cin.get(c);
	}
	return c;
}

double getInt() {
	double c;
	c = getNum();
	while ( c != (int)c ) {
		cout << c << " is not an integer, please enter an integer: ";
		c = getNum();
	}
	return c;
}

void enterPrime() {
	int c;
	cout << "Enter a prime number: ";
	cout << ( isPrime(getIntBiggerThan(1) ) ? " is prime!": " is not prime!");

}

bool isPrime(int b) {
	int c = 2;
	for (c;  c < b; c++)
		if (b % c == 0)
			return false;
		else
			return true;
}

int getIntBiggerThan(double b) {
	int c;
	c = getInt();
	while ( c < b) {
		cout << c << " is not bigger than " << b;
	}
	return c;
}

void defPerfOrAbun(int i) {
	double sum = 0;
	int c = 1;
	for (i; c < i; c++) {
		if ((int)i % (int)c == 0)
			sum += c;
	}
	if (sum > i) 
		cout << i << " is abundant\n"; 
	else if (sum < i)
		cout << i << " is deficient\n";
	else if (sum == i)
		cout << i << " is perfect\n";
}

void printAsciiTable() {
	int l = getInRange(1 , 4);
	char c = 0;
	for (int a = 0; a < 256; a++) {
		cout << setw(6) << a << setw(6);
		if (c == '\a')
			cout << "\\a";
		else if (c == '\b')
			cout << "\\b";
		else if (c == '\n')
			cout << "\\n";
		else if (c == '\r')
			cout << "\\r";
		else if (c == '\\')
			cout << "\\";
		else if (c == '\'')
			cout << "\\\' ";
		else if (c == '\"')
			cout << " \\\" ";
		else if (c == '\0')
			cout << "\\0";
		else if (c == '\t')
			cout << "\\t";
		else if (c == '\v')
			cout <<  "\\v";
		else
			cout << c;
		cout << setw(6) << "||";
		cout << ( (int)c % (int)l == 0 ? "\n":"");
		c++;
	}
}