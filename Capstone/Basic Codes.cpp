#include "Function Headers.h"

void printTitle() {
	cout << "\t         Inventory Program\n"
		 << "\t          Sample Solution\n"
		 << "\t      File IO with validation\n"
		 << "\tParaller Arrays. 2-dimentional Arrays\n"
		 << "\t        fix ext, statistics\n"
		 << "\t              by Kaili Lu\n";
}

char getYOrN() {
	char choice;

	cin >> choice;  cin.ignore(80, '\n');
	while ( choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n' ) {
		cout << "Please answer y/n: ";
		cin >> choice;  cin.ignore(80, '\n');
	}
	if ( choice == 'Y' || choice == 'y' )
		return 'Y';
	else  return 'N';
}

string fixExtraSpace(string name) {
	int i;

	for ( i = 0; name[i] != '\0'; i++ );
	for ( ; name[i - 1] == ' ' || name[i - 1] == '\t'; i-- )
		name.erase(i - 1);
	return name;
}

string removeTrailingDots(string name) {
	int i;

	for ( i = 0; name[i] != '\0'; i++ );
	for ( ; name[i - 1] == '.'; i-- )
		name.erase(i - 1);
	return name;
}

bool hasExtension(string name) {   int i;
	for ( i = 0; name[i] != '\0'; i++ );
	for ( ; i > 0; i-- )
		if ( name[i] == '.' )
			return true;
	return false;
}

string fixExtension(string fileName, string ext) {
	if ( !hasExtension(fileName) )
		fileName += ext;
	return fileName;
}

string getAcceptableName(string fileName, string ext) {
	char junk;

	cin >> junk;  cin.putback(junk);  
	getline(cin, fileName);
	fileName = fixExtraSpace(fileName);
	fileName = removeTrailingDots(fileName);
	fileName = fixExtension(fileName, ext);
	return fileName;
}

void loadFileToRead(string fileName, ifstream &input) {
	input.open(fileName);
	while ( input.fail() ) {
		cout << "Could not open input file \"" << fileName << "\"\n\tHere are the text files you have in this directory:\n\n";
		system("dir | find \"txt\"");
		cout << "\nPlease provide a different file name: ";
		fileName = getAcceptableName(fileName);
		input.open(fileName);
	}
}

void loadFileToWrite(string fileName, ofstream &output) {
	output.open(fileName);
	while ( output.fail() ) {
		cout << "Could not open output file \"" << fileName << "\"\nPlease provide a different file name: ";
		fileName = getAcceptableName(fileName);
		output.open(fileName);
	}
}

int loadArray(ifstream &readFile, string productName[], int pid[], int quantity[], double price[], int ps) {
	int i;
	char junk;

	for ( i = 0; i < ps && readFile >> pid[i] >> quantity[i] >> price[i]; i++ ) {
		readFile >> junk;  readFile.putback(junk);
		getline(readFile, productName[i]);
		productName[i] = fixExtraSpace(productName[i]);
	}
	return i;
}

void printSummary(string productName[], int pid[], int quantity[], double price[], int ls, ostream &output) {
	output << fixed << setprecision(2);
	output << "  Product Name" << setw(14) << "PID" << setw(14) << "Quantity" << setw(14) << "Price" << setw(21) << "Worth\n"
		   << "=============================================================================\n";
	for ( int i = 0; i < ls; i++ )
		output << left << setw(21) << productName[i] << right << setw(7) << pid[i] << setw(14) << quantity[i] << setw(7) 
			   << "$" << setw(7) << price[i] << setw(14) << "$" << setw(7) << quantity[i] * price[i] << endl;
}

void printStats(string productName[], int quantity[], double price[], int ls, ostream &output) {
	output << "\n\nYour inventory is worth: $" << calInvWorth(quantity, price, ls)
		   << "\nThe product with the highest price is: \"" << productName[findMaxIndex(price, ls)] << "\""
		   << "\nThe product with the lowest price is: \"" << productName[findMinIndex(price, ls)] << "\""
		   << "\nThe average price of all items is: $" << getAverage(quantity, price, ls);
}

double calInvWorth(int quantity[], double price[], int ls) {
	double worth = 0;

	for ( int i = 0; i < ls; i++ )
		worth += quantity[i] * price[i];
	return worth;
}

int findMaxIndex(double a[], int ls) {
	int maxIndex = 0;

	for ( int i = 0, maxIndex = 0; i < ls; i++) 
		if ( a[i] > a[maxIndex] )
			maxIndex = i;
	return maxIndex;
}

int findMinIndex(double a[], int ls) {
	int minIndex = 0;

	for ( int i = 0; i < ls; i++)   
		if ( a[i] < a[minIndex] )
			minIndex = i;
	return minIndex;
}

double getAverage(int quantity[], double price[], int ls) {
	int quantities = 0;
	double sum = 0;

	for ( int i = 0; i < ls; i++ ) {
		sum += quantity[i] * price[i];
		quantities += quantity[i];
	}
	return sum / quantities;
}

