// This lab print title via function
// printTitle
// Kaili Lu
// 7-15-13

#include <iostream>
#include <string>
using namespace std;

void printTitle();
// Precond: None;
// Postcond: Print out a title;
void printTitle(string programmer);
// Precond: None;
// Postcond: Print out a title;
void printTitle(string programmer, string propose);
// Precond: None;
// Postcond: Print out a title;
int getInt();
// Precond: None;
// Postcond: Return an integer number;
double getNum();
// Precond: None;
// Postcond: Return a number, validate from letter, remove anything from the buffer;
int getIntNum();
// Precond: None;
// Postcond: Return an integer, validate from letter, remove anything from the buffer;
int getMultiOf5();
// Precond: Input must be an integer;
// Postcond: Return an integer can be devided by 5;
int getMultiOfx( int x );
// Precond: Input must be an integer;
// Postcond: Return an integer can be devided by x;

void main(){
	int n, x;
	printTitle ();
	printTitle ("Kaili Lu");
	printTitle ("Kaili Lu", "Print Title Function Lab");

	cout << "Please enter an integer: (no letter valid) ";
	n = getInt();
	cout << "Good! " << n << " is an integer! \n\n";

	cout << "Please enter an integer: (with letter valid) ";
	n = getIntNum();
	cout << "Good! " << n << " is an integer! \n\n";

	cout << "Please enter an integer multi of 5: (with letter valid) ";
	n = getMultiOf5();
	cout << "Good! " << n << " is a multiple of 5! \n\n";

	
    cout << "Please enter the base x: (with letter valid) ";
	x = getIntNum();
	cout << "Please enter an integer multi of x: (with letter valid) ";
	n = getMultiOfx ( x );
	cout << "Good! " << n << " is a multiple of " << x << "! \n\n";


	system("pause");
}

void printTitle(){
	cout << "\n\tPrint Title Function Lab"
		<< "\n\t     by Kaili Lu \n\n";
}

void printTitle(string programmer){
	cout << "\n\tPrint Title Function Lab"
		<< "\n\t     by " << programmer << endl << endl;
}

void printTitle(string programmer, string propose){
	cout << "\n\t" << propose
		<< "\n\t     by " << programmer << endl << endl;
}

int getInt(){
	double input;

	cin >> input;   cin.ignore(80, '\n');
	while (  input != int (input) ){
		cout << input << " is not an integer, try again: ";
		cin >> input;   cin.ignore(80, '\n');
	}
	return input;
}

double getNum(){
	double input;

	while ( !(cin >> input) ) {
		cin.clear();   cin.ignore(80, '\n');
		cout << "\tPlease no letters: ";  
	}
	cin.ignore(80, '\n');
	return input;
}

int getIntNum(){
	double input = getNum();
	while (  input != int (input) ){
		cout << input << " is not an integer, try again: ";
		input = getNum();
	}
	return input;
}

int getMultiOf5() {
	int input = getIntNum();
	while ( input % 5  !=0 ) {
		cout << input << " is NOT a multiple of 5, try again: ";
		input = getIntNum();
	}
	return input;
}


int getMultiOfx( int x ){
	int input = getIntNum();
	while ( input % x !=0 ) {
		cout << input << " is not a multiple of " << x << ", try again: ";
		input = getIntNum();
	}
	return input;
}