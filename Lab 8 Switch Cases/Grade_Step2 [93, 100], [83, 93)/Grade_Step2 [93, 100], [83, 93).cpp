// Grade System
// Grade_Step1 [93, 100], [83, 93).
// Kaili Lu
// Last Modified 6-24-13

#include <iostream>
using namespace std;

void main(){
	double input;

	cout << "\tAssign course grade according to this grading scheme:\n"
	  	 << "\t                       by Kaili Lu\n\n";

	cout << "\t[93, 100]: A\n"
		 << "\t[83, 93) : B\n"
		 << "\t[73, 83) : C\n"
		 << "\t[63, 73) : D\n"
		 << "\t[0, 63)  : F\n";

	while (true){
		cout << "\n\nWhat is the average grade? ";
		cin  >> input;   cin.ignore(80, '\n');
		cout << "The letter grade is: ";

		switch ( int(input-3)/10 ){
			case 10: case 9: cout << "A"; break;
			case 8: cout << "B"; break;
			case 7: cout << "C"; break;
			case 6: cout << "D"; break;
			default : cout << "F";
		}
	}
}