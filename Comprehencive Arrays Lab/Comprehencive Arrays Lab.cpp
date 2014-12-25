/*Completely filled arrays
Comprehencive Arrays Lab
Kaili Lu
Last Modified 8-7-13*/

#include <iostream>
#include "Functions.h"
using namespace std;

void main(){
	const int EVEN = 90, OF5s = 139, ODD = 100, PSA = 42, PRIME = 120;

	int numOF5s[OF5s], numEVEN[EVEN], numODD[ODD], numPSA[PSA], numPRIME[PRIME];

	printTitle();
	//---------------------OF5s----------------------//
	cout << "I am about to call loadArrayOf5s ... \n";
	loadArrayOf5s(numOF5s, OF5s);
	cout << "Finished loading  loadArrayOf5s ... \n";
	cout << "I am about to call printArray (with the default value for the perLine)... \n";
	printArray(numOF5s, OF5s);
	cout << endl;
	system("pause");

	//---------------------EVEN----------------------//
	cout << "I am about to call loadEvenArray ... \n";
	loadEven(numEVEN, EVEN);
	cout << "Finished loading  loadEvenArray ... \n";
	cout << "I am about to call printArray (with 4 perLine)... \n";
	printArray(numEVEN, EVEN, 4);
	cout << endl;
	system("pause");

	//---------------------ODD----------------------//
	cout << "I am about to call loadOddArray ... \n";
	loadOdd(numODD, ODD);
	cout << "Finished loading  loadOddArray ... \n";
	cout << "I am about to call printArray (with 3 perLine)... \n";
	printArray(numODD, ODD, 3);
	cout << endl;
	system("pause");

	//---------------------PSA----------------------//
	cout << "I am about to call loadPSA ... \n";
	loadPSA(numPSA, PSA);
	cout << "Finished loading  loadOddPSA ... \n";
	cout << "I am about to call printArray (with 1 perLine)... \n";
	printArray(numPSA, PSA, 1);
	cout << endl;
	system("pause");

	//---------------------PRIME---------------------//
	cout << "I am about to call loadPrime ... \n";
	loadPrime(numPRIME, PRIME);
	cout << "Finished loading  loadPrime ... \n";
	cout << "I am about to call printArray (with 2 perLine)... \n";
	printArray(numPRIME, PRIME, 2);
	cout << endl;
	system("pause");
}
