// Grade System
// Grade_Step1 [90, 100], [80, 90).
// Kaili Lu
// Last Modified 6-24-13

#include <iostream>
using namespace std;

void main(){
	double input;

	cout << "\tAssign course grade according to this grading scheme:\n"
	  	 << "\t                       by Kaili Lu\n\n";

	cout << "\t[90, 100]: A\n"
		 << "\t[80, 90) : B\n"
		 << "\t[70, 80) : C\n"
		 << "\t[60, 70) : D\n"
		 << "\t[0, 60)  : F\n";

	while (true){
		cout << "\n\nWhat is the average grade? ";
		cin  >> input;   cin.ignore(80, '\n');
		cout << "The letter grade is: ";

		switch ( int(input)/10 ){
			case 10: case 9: cout << "A"; break;
			case 8: cout << "B"; break;
			case 7: cout << "C"; break;
			case 6: cout << "D"; break;
			default : cout << "F";
		}
	}
}