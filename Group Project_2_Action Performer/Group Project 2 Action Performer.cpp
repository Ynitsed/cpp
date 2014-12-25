// Perform Actions additions, subtractions, multiplications, divisions and find the remainder
// Action Performer
// By Kaili Lu
// Last Modified 6-19-13

#include <iostream>
#include <string>
using namespace std;

void main(){
	char action;
	double a,b;

	cout << "\t\tAction Performer\n"
		 << "\t\t  By Kaili Lu\n\n\n"
		 << "This program performs the five basic actions\n"
		 << "that the arithmetic operators perform:\n"
		 << "\tAddition/Subtractions/Multiplications/Division/Remainder\n\n\n";

	while (true){
		cout << "Action: ";
		cin  >> action;   cin.ignore(80,'\n');
		cout << "Give me a number: ";
		cin  >> a;   cin.ignore(80,'\n');
		cout << "Give me another number: ";
		cin  >> b;	 cin.ignore(80,'\n');

		if (action != 'a' && action != 'A' && action != 's' && action != 'S' 
			&& action != 'm' && action != 'M' && action != 'd' && action != 'D' 
			&& action != 'r' && action != 'R')
			cout <<"I do not know how to perform this action.";
		else{
			if ( action == 'a' || action == 'A')
				cout << a << " + " << b << " = " << a+b ;
			if ( action == 's' || action == 'S')
				cout << a << " - " << b << " = " << a-b ;
			if ( action == 'm' || action == 'M')
				cout << a << " * " << b << " = " << a*b ;
			if ( action == 'd' || action == 'D'){
				if ( b == 0)
					cout << "Action cannot be performed. Division by zero is not defined.";
				else
					cout << a << " / " << b << " = " << a/b ;
			}
			if ( action == 'r' || action == 'R'){
				if ( a != int(a) || b != int(b) )
					cout << "The remainder (modulo) is defined only for integers.";
				else if ( b == 0)
					cout << "The modulo of zero is not permitted.";
				else
					cout << a << " % " << b << " = " << int(a) % int(b);
			}
		}
		cout << "\n\n\t********************\n\n";
	}
}