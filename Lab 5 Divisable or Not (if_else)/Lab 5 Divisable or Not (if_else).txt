// Exam the second number can be divided by the second one
// Divisable or not
// Kaili Lu
// Last modified 6-20-13

#include <iostream>
using namespace std;

void main()
{
	int numberOne, numberTwo;

	//-----------------------------------------------------// long if else
	cout << "\n\t    Divisable or not [long if else]"
		 << "\n\t               by Kaili Lu";

	cout << "\n\n\nPlease enter an integer: ";
	cin >> numberOne;   cin.ignore (80, '\n');
	cout << "\nPlease enter an other integer: ";
	cin >> numberTwo;   cin.ignore (80, '\n');
	
	if ( numberOne % numberTwo == 0 )
		cout << numberOne << " is divisable by " << numberTwo << "." << endl;
	else
		cout << numberOne << " is NOT divisable by " << numberTwo << "." << endl;
	
	system("pause");

	//-----------------------------------------------------// common code outside

	cout << "\n\t    Divisable or not [common code outside]"
		 << "\n\t               by Kaili Lu";

	cout << "\n\n\nPlease enter an integer: ";
	cin >> numberOne;   cin.ignore (80, '\n');
	cout << "\nPlease enter an other integer: ";
	cin >> numberTwo;   cin.ignore (80, '\n');
	
	cout << numberOne << " is ";
	if ( numberOne % numberTwo != 0 )
		cout << "NOT";
	else
		cout << "";
	cout << " divisable by " << numberTwo << "." << endl;
	
	system("pause");

	//-----------------------------------------------------// without else

	cout << "\n\t    Divisable or not [without else]"
		 << "\n\t               by Kaili Lu";

	cout << "\n\n\nPlease enter an integer: ";
	cin >> numberOne;   cin.ignore (80, '\n');
	cout << "\nPlease enter an other integer: ";
	cin >> numberTwo;   cin.ignore (80, '\n');
	
	cout << numberOne << " is ";
	if ( numberOne % numberTwo != 0 )
		cout << "NOT";
	cout << " divisable by " << numberTwo << "." << endl;
	
	system("pause");

	//-----------------------------------------------------// conditional operators
	
	cout << "\n\t    Divisable or not [conditional operators]"
	     << "\n\t                 by Kaili Lu";

	cout << "\n\n\nPlease enter an integer: ";
	cin >> numberOne;   cin.ignore (80, '\n');

	cout << "\nPlease enter an other integer: ";
	cin >> numberTwo;   cin.ignore (80, '\n');
	
	cout << endl << numberOne << " is " << ( numberOne % numberTwo == 0 ? "" : "NOT " ) 
		 << "divisable by " << numberTwo << "." << endl << endl;
	
	system("pause");
}





