// Grade System
// Grade_Step1 [94, 100], [84, 94).
// Kaili Lu
// Last Modified 6-24-13

#include <iostream>
using namespace std;

void main(){
	double input;

	cout << "\tAssign course grade according to this grading scheme:\n"
	  	 << "\t                       by Kaili Lu\n\n";

	cout << "\t(94, 100]: A\n"
		 << "\t(84, 94] : B\n"
		 << "\t(74, 84] : C\n"
		 << "\t(64, 74] : D\n"
		 << "\t(0, 64]  : F\n";

	while (true){
		cout << "\n\nWhat is the average grade? ";
		cin  >> input;   cin.ignore(80, '\n');
		cout << "The letter grade is: ";

		switch ( int ( ceil ((input-4)/10)) ){
			case 10: cout << "A"; break;
			case 9: cout << "B"; break;
			case 8: cout << "C"; break;
			case 7: cout << "D"; break;
			default : cout << "F";
		}
	}
}