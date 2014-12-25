#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void printTitle();
// PreCond: none
// PosCond: print the banner

string fixExtraSpace(string name);
// PreCond: none
// PosCond: delete the extra spaces at the last of string fileName

bool hasExtension(string fileName);
// PreCond: none
// PosCond: return true if fileName has a file extension, return false if fileName has no file extension

string fixExtension(string fileName, string ext = ".txt");
// PreCond: none
// PosCond: if fileName has a tension, do nothing. Otherwise, give fileName a extension .txt

string getAcceptableName(string fileName, string ext = ".txt");
// PreCond: none
// PosCond: get a acceptable name without extra spaces in fileName, and if fileName doesn't have extension, give one (.txt as default)

void connectToifstream(string fileName, ifstream &input);
// PreCond: none
// PosCond: 

void connectToOfstream(string fileName, ofstream &output)
// PreCond: none
// PosCond: 

int loadArray(ifstream &myInput, string prodName[], int pid[], int quantity[], double price[], int ps);
// PreCond: ps must be <= to physical size of array prodName[], pid[], quantity[], and price[]
// PosCond: store information from myInput to array prodName[], pid[], quantity[], and price[] in the cells of 0 to ps

void printSummary(string prodName[], int pid[], int quantity[], double price[], int ls, ostream &output = cout);
// PreCond: ls must be <= to logical size of array prodName[], pid[], quantity[], and price[]
// PosCond: print the summary to output

void printStats(string prodName[], int quantity[], double price[], int ls, ostream &output = cout);
// PreCond: ls must be <= to logical size of array prodName[], quantity[], and price[]
// PosCond: print the stats to output

double calInvWorth(int quantity[], double price[], int ls);
// PreCond: ls must be <= to logical size of array quantity[], and price[]
// PosCond: calculate the worth for all products

int findMaxIndex(double a[], int ls);
// PreCond: ls must be <= to logical size of array a[]
// PosCond: find the maximum value's index of the array a[]

int findMinIndex(double a[], int ls);
// PreCond: ls must be <= to logical size of array a[]
// PosCond: find the minimum value's index of the array a[]

double getAverage(int quantity[], double price[], int ls);
// PreCond: ls must be <= to logical size of array quantity[], and price[]
// PosCond: calculate the average price for all products

char getYOrN();
// PreCond: none
// PosCond: get a letter from user, and validate if it's Y, y, N, or n,
//          and return Y for user enters Y or y, return N for user enters N or n
