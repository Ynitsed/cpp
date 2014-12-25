#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void printTitle();
// Pre-Condition: none
// Post-Condition: print the banner

char getYOrN();
// Pre-Condition: none
// Post-Condition: get a letter from user, and validate if it's Y, y, N, or n,
//          and return Y for user enters Y or y, return N for user enters N or n

string fixExtraSpace(string name);
// Pre-Condition: none
// Post-Condition: delete the extra spaces at the last of name

string fixExtraDot(string name);
// Pre-Condition: none
// Post-Condition: delete the extra dots at the last of name

bool hasExtension(string name);
// Pre-Condition: none
// Post-Condition: return true if fileName has an extension, return false if fileName doesn't have an extension

string fixExtension(string fileName, string ext = ".txt");
// Pre-Condition: none
// Post-Condition: Give fileName an extension .txt if the fileName doesn't have an extension

string getAcceptableName(string fileName, string ext = ".txt");
// Pre-Condition: none
// Post-Condition: Return an acceptable name without extra spaces in fileName, and if fileName doesn't have extension, give one (.txt as default)

void loadFileToRead(string fileName, ifstream &input);
// Pre-Condition: none
// Post-Condition: 

void loadFileToWrite(string fileName, ofstream &output);
// Pre-Condition: none
// Post-Condition: 

int loadArray(ifstream &readFile, string productName[], int pid[], int quantity[], double price[], int ps);
// Pre-Condition: ps must be <= to physical size of array productName[], pid[], quantity[], and price[]
// Post-Condition: store information from myInput to array productName[], pid[], quantity[], and price[] in the cells of 0 to ps

void printSummary(string productName[], int pid[], int quantity[], double price[], int ls, ostream &output = cout);
// Pre-Condition: ls must be <= to logical size of array productName[], pid[], quantity[], and price[]
// Post-Condition: print the summary to output

void printStats(string productName[], int quantity[], double price[], int ls, ostream &output = cout);
// Pre-Condition: ls must be <= to logical size of array productName[], quantity[], and price[]
// Post-Condition: print the stats to output

double calInvWorth(int quantity[], double price[], int ls);
// Pre-Condition: ls must be <= to logical size of array quantity[], and price[]
// Post-Condition: calculate the worth for all products

int findMaxIndex(double a[], int ls);
// Pre-Condition: ls must be <= to logical size of array a[]
// Post-Condition: find the maximum value's index of the array a[]

int findMinIndex(double a[], int ls);
// Pre-Condition: ls must be <= to logical size of array a[]
// Post-Condition: find the minimum value's index of the array a[]

double getAverage(int quantity[], double price[], int ls);
// Pre-Condition: ls must be <= to logical size of array quantity[], and price[]
// Post-Condition: calculate the average price for all products

