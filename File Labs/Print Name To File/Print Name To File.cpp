#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	ifstream readFile;
	ofstream writeFile;
	int a, b;
	string fileName;
	char ch;

	writeFile.open("PrintMyName.txt");

	if ( writeFile.fail() ) {
		cout << "Can not write into this location, please try again!";
		system ("pause");
		return;
	}

	writeFile << "Gabriel K. Lu";

	writeFile.close();

	cout << "Write File Complete! \n\n";
	system ("pause");

	readFile.open("GetAverage.txt");

	if ( readFile.fail() ) {
		cout << "\nCannot find the file GetAverage.txt, please check!";
		system ("pause");
		return;
	}

	readFile >> a >> b;
	readFile.close();

	cout << endl << a << "\t" << b << endl << (a+b)/2.0 << endl
		<< "Read File Complete! \n\n";


	system ("pause");

	//-----------------------

	cout << "\n\nWhat file contains your data: ";
	getline(cin, fileName);
	
	readFile.open(fileName);

	while ( readFile.fail() ){
		cout << "\nCannot find the file " << fileName << ". Please try again: ";	
		getline(cin, fileName);
		readFile.open(fileName);			
	}

	readFile >> a >> b;
	readFile.close();
	cout << endl << a << "\t" << b << endl << (a+b)/2.0 << endl
		 << "Read File Complete! \n\n";
	system ("pause");
}