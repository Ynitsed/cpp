// Load Arraies
// Load Arraies
// Kaili Lu
// 8-7-13

#include <iostream>
#include "Functions.h"
using namespace std;

void printTitle(){
	cout << "\n\tThis is a lab on completely filled arrays"
		<< "\n\t             by Kaili Lu\n\n\n";
}

void loadArrayOf5s (int num[], int s) {
	for (int i = 0; i <= s; i++)
		num[i] = 5;
}

void printArray (const int num[], int s, int perLine) {
	for (int i = 0; i < s; i++)
		cout << num[i] << ( (i+1) % perLine == 0? "\n" : "\t" );
}

void loadEven (int num[], int s) {
	for (int i = 0; i <= s; i++)
		num[i] = i*2+2;
}

void loadOdd (int num[], int s) {
	for (int i = 0; i <= s; i++)
		num[i] = i*2 +1;
}

void loadPSA (int num[], int s) {
	for (int i = 0; i <= s; i++)
		num[i] = (i+1) * (i+1);
}

void loadPrime(int num[], int s) {
	for (int i = 0, j = 2; i < s; i++){
		while (!isPrime(j++));
	  	num[i] = j - 1;
	}
	cout << endl << endl;
}

bool isPrime(int n) {
	for (int i = 2; i < n; i++)
		if (n % i == 0)   return false;	    
	return true;
}