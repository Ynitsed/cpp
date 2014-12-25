#include <iostream>
using namespace std;

void printTitle();
// PreCond: none
// PosCond: print the banner

void loadArrayOf5s (int num[], int s);
// PreCond: the logical size s cannot be greater than the phy size of the array.
// PosCond: load up s numbers of 5 into num[]

void printArray (const int num[], int s, int perLine = 5);
// PreCond: the logical size should be less than or equal to the logical size of the array num[]
// PosCond: print the data from the first cell to s, perLine per line, 5 perline as default.

void loadEven (int num[], int s);
// PreCond: s cannot be greater than the phy size of the array num[].
// PosCond: load up s numbers of even numbers starting from 1 into num[]

void loadOdd (int num[], int s);
// PreCond: s cannot be greater than the phy size of the array num[].
// PosCond: load up s numbers of odd numbers starting from 1 into num[]

void loadPSA (int num[], int s);
// PreCond: s cannot be greater than the phy size of the array num[].
// PosCond: load up s numbers of perfect squared numbers starting from 1 into num[]

void loadPrime (int num[], int s);
// PreCond: s cannot be greater than the phy size of the array num[].
// PosCond: load up s number of prime numbers begins from 2 into num[]

bool isPrime (int x);
// PreCond: none
// PosCond: valid and return true if x is a prime number else return false