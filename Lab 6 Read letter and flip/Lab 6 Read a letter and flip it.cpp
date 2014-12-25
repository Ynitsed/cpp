// Letter classification and flip case with clear screen
// This program reads letters and classifies them as capital or lower and then flips their case
// By Kaili Lu
// Last Modified 6-25-2013

#include <iostream>
using namespace std;

void main(){
	char letter;

	cout << "\t        This program reads letters and    \n"
		 << "\t      classifies them as capital or lower \n"
		 << "\t           and then flips their case		 \n"
		 << "\t                 by Kaili Lu				 \n\n\n";

	while (true){
		cout << "\nPlease give me a letter: ";
		cin  >> letter;   cin.ignore(80,'\n');

		if ( !(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z') )
			cout << "\t\t\'" << letter << "\' is not a letter.\n\n";
		else
			cout << "\t\'" << letter << "\' is " << (letter >= 'a' && letter <= 'z'? "lower" : "upper")
				 << " case letter. The corresponding " << (letter >= 'a' && letter <= 'z'? "upper" : "lower") << " letter is \'" 
				 << (letter >= 'a' && letter <= 'z'? char (letter + ('A' - 'a')) : char (letter + ('a' - 'A')))  << "\'.\n\n";

		system("pause");
		system("cls");
	}
}