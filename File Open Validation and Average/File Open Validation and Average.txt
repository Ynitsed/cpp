// File open validation and average
// Read two numbers from a txt file and take the average of it
// Kaili Lu
// Last Modified 3-28-2013

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int a, b;
	string fileName;
	char ch;
	ifstream readFile;

	cout << "\tThis Program asks the user for the name of a file that\n"
		 << "\t                  contains two numbers,\n"
		 << "\t        and prints on the monitor their average\n"
		 << "\t                     by Kaili Lu\n\n";

	cout << "What file contains your data? ";
	cin  >> ch;   cin.putback(ch);
	getline(cin, fileName);

	readFile.open(fileName);
	
	if(readFile.fail()){
		system("color 1F");
		cout << "Failed to open file: \"" << fileName << "\". Exiting the program.\n\n";
		cin.get();
		return -1;
	}

	readFile >> a >> b;
	cout << "The average of "<< a << " and " << b << " is: " << (a+b)/2.0 <<"\n\n";
	
	system("pause");
}


