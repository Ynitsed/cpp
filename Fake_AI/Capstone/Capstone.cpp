// Inventory program
// Capstone
// Kaili LU
// 8-14-13

#include "capstoneheader.h"
using namespace std;

void main()
{
	const int PS = 3;
	string fileName, prodName[PS];
	int ls, pid[PS], quantity[PS];
	double price[PS];
	ifstream myInput;
	ofstream myOutput;
	fstream file;

	printTitle();

	cout << "\nWhat file contains your inventory data? ";
	fileName = getAcceptableName(fileName);
	connectToifstream(fileName, myInput);

	cout << "\nInput file " << fileName << " successfully opened.\n";
	ls = loadArray(myInput, prodName, pid, quantity, price, PS);  // get the logical size
	myInput.close();

	cout << "I got " << ls << " items.\n\n\n";
	printSummary(prodName, pid, quantity, price, ls);  // print states and summary
	printStats(prodName, quantity, price, ls);

	cout << "\n\n\nDo you want this info to be saved in a file? ";
	if ( getYOrN() == 'Y' )  // get the choice
	{
		cout << "\nWhere do you want this report to go to? ";
		fileName = getAcceptableName(fileName, " OUT.TXT");
		connectToOfstream(fileName, &output);
		myOutput.open(fileName);
		while ( myOutput.fail() )
		{
			cout << "Could not open output file \"" << fileName << "\"\n\tHere are the text files you have in this directory:\n\n";
			system("dir *.txt /b");
			cout << "\nPlease provide a different file name: ";
			fileName = getAcceptableName(fileName);
			myOutput.open(fileName);
		}
		printSummary(prodName, pid, quantity, price, ls, myOutput);  // print states and summary    
		printStats(prodName, quantity, price, ls, myOutput);  
		myOutput.close();
		cout << "\nYour report can be found in " << fileName << endl;
	}
	cout << "\n\nHit ENTER to end the program.";
	cin.get();
}