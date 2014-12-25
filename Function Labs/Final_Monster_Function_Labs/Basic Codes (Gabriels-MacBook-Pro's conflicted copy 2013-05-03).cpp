#include <iostream>
#include <cmath>
#include "Functions.h"
using namespace std;

void banner(){
	cout << "\n\tThis is program demonstrates how to use functions"
		<< "\n\t                by Kaili Lu\n\n";
}

double getNum(){
	double input;

	while ( !(cin >> input) )		{
			cin.clear();   cin.ignore(80, '\n');
			cout << "\tPlease no letters: ";  
		}
		cin.ignore(80, '\n');
		return input;
}

double getWholeNum(){
	double input;
	bool isWhole = true;

	while (isWhole){
		input = getNum();
		cout << ( input == int(input) ? "" : "Please enter an integer: ");
		( input != int(input) ? isWhole = true : isWhole = false);
		}
	return input;
}

double getPos(){
	double input;
	bool isPos = true;
	
	while(isPos) {
		cin  >> input;   cin.ignore(80,'\n');
		cout << ( input > 0 ? "" : "Please enter a positive number: ");
		( input <= 0 ? isPos = true : isPos = false);
	}
	return input;
}//Done!

double getPosNum(){
	double input;
	bool isPos = true;

	while(isPos) {
		input = getNum();
		cout << ( input > 0 ? "" : "Please enter a positive number: ");
		( input <= 0 ? isPos = true : isPos = false);
	}
	return input;
}//Done!

double getMultOf5(){
	double input;

	input = getNum(); 

	while ( int(input)%5 != 0 || input != int (input)){
			cout << "\t" << input << " is NOT a multiple of 5. Try again: ";
			input = getNum();
		}
	return input;
}//Done!

char getLetter(){
	char input;

	cin  >> input;   cin.ignore(80,'\n');

	while (! ( 'a' <= input && input <= 'z' || 'A' <= input && input <= 'Z') ){
		cout << input << " is NOT a letter. Try again: ";
		cin >> input;   cin.ignore(80, '\n');
	}
	return input;
}

double getInRange(double s, double e){
	double input;

	input = getNum();

	while ( ! (s <= input && input <= e) ){
		cout << input << " is NOT in the range [" << s << ", " << e << "]. Try again: ";
		input = getNum();
	}
	return input;
}

double getPerfectSquare(){
	double input;
	
	input = getPosNum();

	while(sqrt(input) != int (sqrt(input)) ){
		cout << input << " is NOT a perfect square. Try again: ";
		input = getPosNum();
	}
	return input;
}

int getMultOfNum(int x){
	int input;
	
	input = getWholeNum();

	while (input%x != 0){
		cout << "Please enter a multiple of " << x << ": ";
		input = getWholeNum();
	}
	return input;
}

void index(){
	cout << "\n\t1] Average a set of non-negative numbers (sentinel)"
		 << "\n\t2] Enter a number in a given range"
		 << "\n\t3] Enter a letter"
		 << "\n\t4] Enter an integer"
		 << "\n\t5] Enter a prime number"
		 << "\n\t        (needs \"slave\" function isPrime, calls getIntBiggerThan)"
		 << "\n\t6] Classify a number as deficient, perfect, or abundant (think strcmp)"
		 << "\n\t7] Print the ASCII table"
		 << "\n\t8] End the program";
}