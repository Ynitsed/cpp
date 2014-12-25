// Re-arrange the three numbers
// Rearrange Function
// Kaili Lu
// Last Modified 7-31-13

#include <iostream>
#include <iomanip>
using namespace std;

void printBanner();
//Pre-condition : None;
//Pos-condition : Print the title as Re-arrange the three numbers ;

void mySwap(int &x, int &y);
//Pre-condition : None;
//Pos-condition : Change the value between two variables;

void keepInOrder(int &x, int &y, int &z);
//Pre-condition : None;
//Pos-condition : Re-arrange the three numbers by small to large;

void beforeTheCall(int x, int y, int z);
//Pre-condition : None;
//Pos-condition : Print out the original order of the numbers;

void afterTheCall(int x, int y, int z);
//Pre-condition : None;
//Pos-condition : Print out the order of the numbers after re-arrange;

void printBanner2();
//Pre-condition : None;
//Pos-condition : Print the banner for the 2nd Part using a for loop;

void main(){
	int x, y, z, temp = 0;

	printBanner();

	///////////////   Part 1   ///////////////
	x = 1; y = 2; z = 3;
	beforeTheCall(x, y, z);
	keepInOrder(x, y, z);
	afterTheCall(x,y,z);

	///////////////   Part 2   ///////////////
	x = 1; y = 3; z = 2;
	beforeTheCall(x, y, z);
	keepInOrder( x, y, z );
	afterTheCall(x, y, z);

	///////////////   Part 3   ///////////////
	x = 2; y = 1; z = 3;
	beforeTheCall(x, y, z);
	keepInOrder( x, y, z );
	afterTheCall(x, y, z);

	///////////////   Part 4   ///////////////
	x = 2; y = 3; z = 1;
	beforeTheCall(x, y, z);
	keepInOrder( x, y, z );
	afterTheCall(x, y, z);

	///////////////   Part 5   ///////////////
	x = 3; y = 1; z = 2;
	beforeTheCall(x, y, z);
	keepInOrder( x, y, z );
	afterTheCall(x, y, z);

	///////////////   Part 6   ///////////////
	x = 3; y = 2; z = 1;
	beforeTheCall(x, y, z);
	keepInOrder( x, y, z );
	afterTheCall(x, y, z);

	cout << endl;
	system("pause");

	//------------- End of 1st Part -------------//
	printBanner2();

	cout << "\tx" << setw(8) << "y" << setw(8) << "z\n"
		 << "\t===================\n";

	for (int i = 1; i <= 6; i++ ){    // ????????
		switch (i) {
		case 1: x = 1, y = 2, z = 3; break;
		case 2: x = 1, y = 3, z = 2; break;
		case 3: x = 2, y = 1, z = 3; break;
		case 4: x = 2, y = 3, z = 1; break;
		case 5: x = 3, y = 1, z = 2; break;
		case 6: x = 3, y = 2, z = 1; 		
		}		
		cout << "Start:" << setw(3) << x << setw (8) << y << setw(8) << z << endl;
		keepInOrder( x, y, z );
		cout << "End:  " << setw(3) << x << setw (8) << y << setw(8) << z << endl << endl;
	}
	system("pause");
}
void printBanner(){
	cout << "\t\tLab on \"Driver testing the rearrange function.\n"
		 << "\t\t                 by Kaili Lu\n";
}

void beforeTheCall(int x, int y, int z) {
	cout << "\nBefore the call: x = " << x << " y = " << y << " z = " << z
		 << "\n" << x << y << z;
}

void afterTheCall(int x, int y, int z) {
	cout << "\nAfter the call: x = " << x << " y = " << y << " z = " << z
		 << "\n" << x << y << z << endl;
}

void mySwap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void keepInOrder(int &x, int &y, int &z) {
	if ( x > y)
		mySwap( x, y );
	if ( y > z)
		mySwap( y, z );
	if ( x > y)
		mySwap( x, y );
}

void printBanner2() {
	cout << "\n\n\n\tBETTER way to test (using a for loop and a table format)\n\n";
}


