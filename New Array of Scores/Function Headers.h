#include <iostream>
#include <iomanip>
using namespace std;

void printTitle();
// Pre-condition    None
// Post-condition   Print out the title which shows the function of the program and the author

int loadArray(double myArray[], int s, double m);
// Pre-condition    0 <= s <= the PHYSICAL size of myArray[]
// Post-condition   Returns the LOGICAL size of myArray[], loads the scores into the cells within the LOGICAL size of myArray[]

double noLetter();
// Pre-condition    None
// Post-condition   Returns double and does not crash for non-numeric input, removes the rest of the line from cin

double underH(const double m);
// Pre-condition    None
// Post-condition   Returns a double <= m, does not crash for non-numeric input, and removes the rest of the line from cin

void printArray(const double myArray[], int s);
// Pre-condition    0 <= s <= the LOGICAL size of myArray[]
// Post-condition   Prints the first s element of myArray[] in 5 numbers per line

int getMaxIndex(const double myArray[], int s);
// Pre-condition    0 <= s <= the LOGICAL size of myArray[]
// Post-condition   Return the index of the cell that contains the maximum value in the first s elements of myArray[]

double getMax(const double myArray[], int s);
// Pre-condition    0 <= s <= the LOGICAL size of myArray[]
// Post-condition   Return the maxmimum value contained in the first s elements of myArray[]

int getMinIndex(const double myArray[], int s);
// Pre-condition    0 <= s <= the LOGICAL size of myArray[]
// Post-condition   Return the index of the cell that contains the minimum value in the first s elements of myArray[]

double getMin(const double myArray[], int s);
// Pre-condition    0 <= s <= the LOGICAL size of myArray[]
// Post-condition   Return the minimum value contained in the first s elements of myArray[]

double getAve(const double myArray[], int s);
// Pre-condition    0 <= s <= the LOGICAL size of myArray[]
// Post-condition   Return the average of the data contained in the first s elements of myArray[]

void printStats(const double myArray[], int s);
// Pre-condition    0 <= s <= the LOGICAL size of myArray[]
// Post-condition   Print the maximun, minimum, and average values contained in the first s element of myArray[]