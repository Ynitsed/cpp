// Function Overloading
// Area Lab
// Kaili Lu
// Last Modified 8-2-2013

#include <iostream>
#include <cmath>
using namespace std;

void printTitle();
// Pre-condition: NONE;
// Pos-condition: Print out the title of the area calculation function

char getYN();
// Pre-condition: NONE;
// Pos-condition: Return only 'y' || 'Y' || 'n' || 'N', and ignore all the rest in the buffer

double getNum();
// precondition: NONE
// postcondition: Gets a number, erases remaining input from the buffer, does not crash for none-numeric input

double getPosNum();
// precondition: NONE
// postcondition: Gets a positive number, erases remaining input from the buffer, does not crash for none-numeric input

double area(double r); 
// precondition: NONE
// postcondition: Return the area of a circle 

double area(double l, double w); 
// precondition: NONE
// postcondition: Return the area of a Rectangle 

void getSides(double &l, double &w, double &r);
// precondition: NONE
// postcondition: Check whether the sum of two sides are larger than the third one.

double area(double l, double w, double r);
// precondition: NONE;
// postcondition: Return the area of a Triangle 

bool getAnswer(char choice);
// precondition: NONE
// postcondition: Return the bool value true or false according to the user's input;

void main(){
	char choice;
	double r, answer, l, w;
	bool flag = true;

	printTitle();
	cout << "Do you want to test the program? ";

	while ( getAnswer(choice) ){
		//--------------- Circle --------------//
		cout << "\nGive me the radius of a circle: ";
		r = getPosNum();
		answer = area(r);
		cout << "\tThe area of the circle is : " << answer << endl << endl;
		//--------------- Rectangle --------------//
		cout << "\nGive me the length of a rectangle: ";
		l = getPosNum();
		cout << "...and the width: ";
		w = getPosNum();
		answer = area(l, w);
		cout << "\tThe area of the rectangle is : " << answer << endl << endl;
		//--------------- Triangle --------------//
		cout << "\nGive me the length of a triangle\nSide 1: ";
		l = getPosNum();
		cout << "Side 2: ";
		w = getPosNum();
		cout << "Side 3: ";
		r = getPosNum(); 
		
		getSides(l, w, r);
		answer = area(l, w, r);
		cout << "\tThe area of the rectangle is : " << answer << endl << endl;
		//--------------- Done --------------//
		cout << "\n\t********************\n\n"
			<< "Do you what to test the program again? ";
	}
}

void printTitle(){
	cout << "\n\t          Lab on Overloading Functions"
		<< "\n\tFind the area of a rectangle, triangle, or circle"
		<< "\n\t            By Kaili Lu\n\n";
}

char getYN(){
	char input;
	cin >> input;   cin.ignore(80, '\n');

	while (input != 'y' && input != 'Y' && input != 'N' && input != 'n'){
		cout << "Please type Y or N. Try again: ";
		cin >> input;   cin.ignore(80, '\n');
	}
	return input;
}

bool getAnswer(char choice){
	choice = getYN();

	if ( choice == 'n' || choice == 'N'){
		cout << "\nDon't you love geometry? \n";
		system("pause");
		return false;
	}
	return true;
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

double getPosNum(){
	double input;
	bool isPos = true;

	while(isPos) {
		input = getNum();
		cout << ( input > 0 ? "" : "Please enter a positive number: ");
		( input <= 0 ? isPos = true : isPos = false);
	}
	return input;
}

void getSides(double &l, double &w, double &r){
	while ( !( l + w > r && l + r >w && r + w > l) ){
		cout << "\nThe sum of two sides of a triangle must be greater than the third side.\nTry again. Side 1:";
		l = getPosNum();
		cout << "Side 2: ";
		w = getPosNum();
		cout << "Side 3: ";
		r = getPosNum(); 
	}
}

double area (double r){
	return r * r * 3.14;
}

double area (double l, double w){
	return l*w;
}

double area(double l, double w, double r){
	double s;
	s = (l + w + r) / 2;
	return sqrt( s * (s - w) * (s - r) * (s - l) );
}

