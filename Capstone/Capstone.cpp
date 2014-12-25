// Inventory program
// Capstone
// Kaili Lu
// 8-16-13

#include "Function Headers.h"

void main() {
	const int PS = 3;
	int ls, pid[PS], quantity[PS];
	double price[PS];
	string fileName, productName[PS];
	ifstream readFile;
	ofstream writeFile;
	//----------------------Definition Complete----------------------//
	printTitle();

	cout << "\nWhat file contains your inventory data? ";
	fileName = getAcceptableName (fileName);
	loadFileToRead (fileName, readFile);
//----------------------Load File Complete----------------------//
	cout << "\nInput file " << fileName << " successfully opened.\n";
	ls = loadArray(readFile, productName, pid, quantity, price, PS);  
	readFile.close();

	cout << "I got " << ls << " items.\n\n\n";
	printSummary(productName, pid, quantity, price, ls);  
	printStats(productName, quantity, price, ls);

	cout << "\n\n\nDo you want this info to be saved in a file? ";
	if ( getYOrN() == 'Y' ) {
		cout << "\nWhere do you want this report to go to? ";
		fileName = getAcceptableName(fileName, " OUT.TXT");
		loadFileToWrite(fileName, writeFile);
		printSummary(productName, pid, quantity, price, ls, writeFile);    
		printStats(productName, quantity, price, ls, writeFile);  
		writeFile.close();
		cout << "\nYour report can be found in " << fileName << endl;
	}
	cout << "\n\nHit ENTER to end the program...";
	cin.get();
}