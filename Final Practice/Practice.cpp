/*Practice 
Kaili Lu
Last Modified*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void printTitle();
void getFileName();
void loadQuantity (double num[], double quantity[], int s);
void loadPrice (double num[], double price[], int s);
void printStat(int SIZE, double quantity[], double price[]);
double sum(int SIZE, double quantity[], double price[]);
char getYN();
bool getAnswer(char choice);
void writeResult (string fileName,int SIZE, double quantity[], double price[]);

void main(){
	char ch;
	string fileName;
	ofstream writeFile;
	ifstream readFile;
	bool flag = true;

	const int SIZE = 6;
	const int SIZE2 = 3;
	double total;
	char answer;
	double all[SIZE];
	double price[SIZE];
	double quantity[SIZE];

	printTitle();

	cout << "What file contains your inventory data? ";
	cin  >> ch;   cin.putback(ch);
	getline(cin, fileName);

	while ( flag ){
		readFile.open (fileName);	

		if ( readFile.fail() ){
			cout << "\nCould not open input file " << fileName
				<< "\nPlease provide a different file name: ";
			cin  >> ch;   cin.putback(ch);
			getline(cin, fileName);
		}
		else{
			cout << "Input file successfully opened.\n";			
			flag = false;
		}
	}

	for (int i = 0; i < SIZE; i ++){
		readFile >> all[i];
	}

	loadQuantity (all, quantity, SIZE);
	loadPrice (all, price, SIZE);

	cout << "I got 3 items." << endl << endl << endl;

	readFile.close ();

	printStat(SIZE2, quantity, price);

	total = sum(SIZE2, quantity, price);

	cout << "\n\n\nYour inventory is worth: " << total << endl << endl;

	cout << "Do you want this info to be saved in a file? ";

	while ( getAnswer(answer) ){
		cout << "Where do you want this report to go to? ";
		cin  >> ch;   cin.putback(ch);
		getline(cin, fileName);
		writeResult(fileName, SIZE2, quantity, price);

		cout << "Your report can be faound in " << fileName;
		break;
	}
	cout << "\n\nHit ENTER to end the program.";
	cin.get();
}


void printTitle(){
	cout << "\t\tInventory Program\n"
		<< "\t\t Sample Solution\n"
		<< "\t\t  by Kaili Lu\n\n";
}


void printArray (int num[], int s){
	for (int i = 0; i < s; i++){
		cout << num[i];
	}
	cout << endl << endl;
}

void loadQuantity (double num[], double quantity[],int s){
	for (int i = 0, j = 0; i < s; i+= 2, j++){
		quantity[j] = num[i];
	}
}

void loadPrice (double num[], double price[], int s){
	for (int i = 1, j = 0; i < s; i+= 2, j++){
		price[j] = num[i];
	}
}

void printStat(int SIZE, double quantity[], double price[]){
	cout << "Here is your inventory summery:\n\n"
		<< setw(11) << "Product#" << setw(20) << "Quantity" << setw(20) << "Price" << setw(20) << "Worth\n";
	for (int i = 1; i <= 74; i++)
		cout << "=";

	for (int i = 0, j = 1; j <= SIZE; i++, j++){
		cout << "\n" << setw (7) << j << setw (21) << setprecision(0) << fixed <<quantity[i] << setw (15) << "$" << setw (8)  << setprecision(2) << fixed << price[i] << setw (10) << "$" << setw (9) << setprecision(2) << price[i] * quantity[i];
	}
}

double sum(int SIZE, double quantity[], double price[]){
	double sum = 0;
	for ( int i = 0; i < SIZE; i++)
		sum += price[i] * quantity[i];
	return sum;
}

char getYN(){
	char input;
	cin >> input;   cin.ignore(80, '\n');

	while (input != 'y' && input != 'Y' && input != 'N' && input != 'n'){
		cout << "Please type Y or N. Try again: ";
		cin >> input;   cin.ignore(80, '\n');
	}
	return input;
}

bool getAnswer(char choice){
	choice = getYN();

	if ( choice == 'n' || choice == 'N')
		return false;
	return  true;
}

void writeResult (string fileName, int SIZE, double quantity[], double price[]){
	ofstream writeFile;
	writeFile.open(fileName);

	writeFile << "Here is your inventory summery:\n\n"
		<< setw(11) << "Product#" << setw(20) << "Quantity" << setw(20) << "Price" << setw(20) << "Worth\n";
	for (int i = 1; i <= 74; i++)
		writeFile << "=";

	for (int i = 0, j = 1; j <= SIZE; i++, j++){
		writeFile << "\n" << setw (7) << j << setw (21) << setprecision(0) << fixed <<quantity[i] << setw (15) << "$" << setw (8)  << setprecision(2) << fixed << price[i] << setw (10) << "$" << setw (9) << setprecision(2) << price[i] * quantity[i];
	}
	writeFile.close();
}