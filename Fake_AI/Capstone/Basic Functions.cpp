#include "capstoneheader.h"
using namespace std;

void printTitle()
{
	cout << "                    Inventory Program                       \n"
		 << "                     Sample Solution                        \n"
		 << "                 File IO with validation,                   \n"
		 << "           Paraller Arrays. 2-dimentional Arrays            \n"
		 << "                   fix ext, statistics                      \n"
		 << "                         by Kaili Lu                        \n";
}

string fixExtraSpace(string name)
{
	int i;

	for ( i = 0; name[i] != '\0'; i++ );
	for ( ; name[i - 1] == ' ' || name[i - 1] == '\t' || name[i - 1] == '\n'; i-- )
		name.erase(i - 1);

	return name;
}

bool hasExtension(string fileName)
{
	for ( int i = 0; fileName[i] != '\0'; i++ )
		if ( fileName[i] == '.' && fileName[i + 1] != '\0' )
			return true;

	return false;
}

string fixExtension(string fileName, string ext)
{
	if ( !hasExtension(fileName) )
		fileName += ext;

	return fileName;
}

string getAcceptableName(string fileName, string ext)
{
	char junk;

	cin >> junk;  cin.putback(junk);  
	getline(cin, fileName);
	fileName = fixExtraSpace(fileName);
	fileName = fixExtension(fileName, ext);

	return fileName;
}

void connectToifstream(string fileName, ifstream &input)
{
	input.open(fileName);
	while ( input.fail() )
	{
		cout << "Could not open input file \"" << fileName << "\"\n\tHere are the text files you have in this directory:\n\n";
		system("dir *.txt /b");
		cout << "\nPlease provide a different file name: ";
		fileName = getAcceptableName(fileName);
		input.open(fileName);
	}
}

void connectToOfstream(string fileName, ofstream &output)
{
	output.open(fileName);
	while ( output.fail() )
	{
		cout << "Could not open output file \"" << fileName << "\"\n\tHere are the text files you have in this directory:\n\n";
		system("dir *.txt /b");
		cout << "\nPlease provide a different file name: ";
		fileName = getAcceptableName(fileName);
		output.open(fileName);
	}
}

int loadArray(ifstream &myInput, string prodName[], int pid[], int quantity[], double price[], int ps)
{
	int i;
	char junk;

	for ( i = 0; i < ps && myInput >> pid[i] >> quantity[i] >> price[i]; i++ )
	{
		myInput >> junk;  myInput.putback(junk);
		getline(myInput, prodName[i]);
		prodName[i] = fixExtraSpace(prodName[i]);
	}

	return i;
}

void printSummary(string prodName[], int pid[], int quantity[], double price[], int ls, ostream &output)
{
	output << fixed << setprecision(2);
	output << "  Product Name" << setw(14) << "PID" << setw(14) << "Quantity" << setw(14) << "Price" << setw(21) << "Worth\n"
		   << "=============================================================================\n";
	for ( int i = 0; i < ls; i++ )
		output << left << setw(21) << prodName[i] << right << setw(7) << pid[i] << setw(14) << quantity[i] << setw(7) 
			   << "$" << setw(7) << price[i] << setw(14) << "$" << setw(7) << quantity[i] * price[i] << endl;
}

void printStats(string prodName[], int quantity[], double price[], int ls, ostream &output)
{
	output << "\n\nYour inventory is worth: $" << calInvWorth(quantity, price, ls)
		   << "\nThe product with the highest price is: \"" << prodName[findMaxIndex(price, ls)] << "\""
		   << "\nThe product with the lowest price is: \"" << prodName[findMinIndex(price, ls)] << "\""
		   << "\nThe average price of all items is: $" << getAverage(quantity, price, ls);
}

double calInvWorth(int quantity[], double price[], int ls)
{
	double worth = 0;

	for ( int i = 0; i < ls; i++ )
		worth += quantity[i] * price[i];

	return worth;
}

int findMaxIndex(double a[], int ls)
{
	int i = 0, max = 0;

	while ( i < ls )
	{
		if ( a[i] > a[max] )
			max = i;
		i++;
	}

	return max;
}

int findMinIndex(double a[], int ls)
{
	int i = 0, min = 0;

	while ( i < ls )
	{
		if ( a[i] < a[min] )
			min = i;
		i++;
	}

	return min;
}

double getAverage(int quantity[], double price[], int ls)
{
	int quantities = 0;
	double sum = 0;

	for ( int i = 0; i < ls; i++ )
	{
		sum += quantity[i] * price[i];
		quantities += quantity[i];
	}

	return sum / quantities;
}

char getYOrN()
{
	char choice;

	cin >> choice;  cin.ignore(80, '\n');
	while ( choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n' )
	{
		cout << "Please answer y/n: ";
		cin >> choice;  cin.ignore(80, '\n');
	}
	if ( choice == 'Y' || choice == 'y' )
		return 'Y';
	else  return 'N';
}