//Print out the alphabet
//Print Alphabet
//Kaili Lu
//8-5-13

#include <iostream>
using namespace std;

void printTitle();
// Pre-condition: NONE;
// Pos-condition: Print out a title shows the function of this lab

void printAlpha( char start = 'A', char end = 'Z' , int perLine = 5);
// Pre-condition: None;
// Pos-condition: Print out the alphabet from the start char to the end chart, and return line according to the perline provided by the user

char getYN();
// Pre-condition: NONE;
// Pos-condition: Return only 'y' || 'Y' || 'n' || 'N', and ignore all the rest in the buffer

bool getAnswer(char choice);
// precondition: NONE
// postcondition: Return the bool value true or false according to the user's input;

char getLetter();
// precondition: NONE
// postcondition: Return a character, and clear all the rest characters from the buffer if there have any.

char getLetterBiggerThan(char input, char start);
// precondition: NONE
// postcondition: Return a character which is after than the given char, and clear all the rest characters from the buffer if there have any.

char getSameCaseLetter( bool startcase);
// precondition: 
//

double getNum();
// PreCond: none
// PosCond: validate if input is a number or non-numeric values, and remove the rest of things in cin

int getIntNum();
// PreCond: none
// PosCond: validate if the number form the function getNum() is an integer or double, and remove the rest of things in cin


void main(){
	char choice, start, end, junk;
	bool startcase, endcase;
	int perLine;

	printTitle();
	//----------A-Z----------//
	cout << "\nCalling \"printAlpha()\""
		<< "\n\tPrinting from A to Z, 5 charaters per line: \n\n";
	printAlpha();
	//----------T-Z----------//
	cout << "\nCalling \"printAlpha(\'T\')\""
		<< "\n\tPrinting from T to Z, 5 charaters per line: \n\n";
	printAlpha('T');
	//----------C-W----------//
	cout << "\nCalling \"printAlpha(\'C\',\'W\')\""
		<< "\n\tPrinting from C to Z, 5 charaters per line: \n\n";
	printAlpha('C', 'W');
	//----------D-Y-3---------//
	cout << "\nCalling \"printAlpha(\'D\',\'Y\',3)\""
		<< "\n\tPrinting from D to Y, 3 charaters per line: \n\n";
	printAlpha('D', 'Y', 3);

	//----------PART 2 ---------//
	cout << "\n\nDo you want to choose the arguments? ";
	while ( getAnswer(choice) ) {
		cout << "\n\n\tPeople's Choice! ;)\n"
			<< "\tEnter the starting letter: ";
		start = getLetter();
		startcase = ('A' <= start && start <= 'Z' ? 1 : 0);

		cout << "\tEnter the ending letter: ";
		end = getSameCaseLetter( getLetterBiggerThan (startcase), start ) ;  // use a validation funtion2

		cout << "\tHow many letters do you want me to print per line\n"
			<< "\t   (if you hit ENTER I will use the default value) ";
		cin.get(junk);

		if ( junk == '\n'){
			cout << "\n\nCalling \"printAlpha(\'" << start << "\', \'" << end << "\')\"" << endl;
			printAlpha(start, end);
		}
		else{
			cin.putback(junk);
			perLine = getIntNum();
			cout << "\n\nCalling \"printAlpha(\'" << start << "\', \'" << end << "\', "<< perLine << ")\"" << endl;
			printAlpha(start, end, perLine);
		}
		cout << "\n\nDo you want to choose the arguments again?";
	}
}

void printTitle(){
	cout << "\tLab on Optional Arguments\n"
		<< "\t      by Kaili Lu\n\n";
}

void printAlpha(char start,  char end, int perLine){
	for (char i = start; i <= end; i++){
		cout << i << ( (i - start +1) % perLine == 0? "\n" : "\t");
	}
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
		cout << "\nThank you for printing with us!\n\n";
		system("pause");
		return false;
	}
	return  true;
}

char getLetter() {
	char input;
	cin  >> input;   cin.ignore(80,'\n');

	while (! ( 'a' <= input && input <= 'z' || 'A' <= input && input <= 'Z') ){
		cout << input << " is NOT a letter. Try again: ";
		cin >> input;   cin.ignore(80, '\n');
	}
	return input;
}

char getSameCaseLetter( bool startcase ) {
	bool endcase;
	char end = getLetter();
	while ( startcase != endcase) {
		cout << "\tPlease Enter a" << (endcase == 0 ? "n UPPER " : " LOWER ") << "case letter. Try again: ";
		end = getLetter();
		endcase = ('A' <= end && end <= 'Z' ? 1 : 0);
	}
	return end;
}

char getLetterBiggerThan ( char input , char start ) {
	while ( input <= start ) {
		cout << "\tEnd letter must be after than starting letter." << endl
			<< "\tTry again: ";
		input = getLetter();
	}
	return input;
}

double getNum (){        
	double input;
	while ( !( cin >> input ) ) {
		cin.clear (); cin.ignore( 80 , '\n');
		cout << "\tPlease no inappropriate characters! " << endl
			<< "\tTry again: ";
	}
	cin.ignore (80,'\n');
	return input;
}

int getIntNum(){     
	double input = getNum();
	while ( input != int (input) ) {
		cout << "\tYour Number is not an integer!" << endl
			<< "\tTry again: ";
		input = getNum();
	}
	return int(input);
}