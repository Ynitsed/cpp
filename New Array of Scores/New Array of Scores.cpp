// This program loads an array of doubles with students' score using a negative value as the loop's sentinel
// setting physical size to 3 for easy testing   
// Array of Scores
// Kaili Lu
// 5-10-13

#include "Function Headers.h";

void main() {
	const int SIZE = 30;
	const double M = 100;
	double myArray[SIZE];
	int count = 0;

	printTitle();

	while (true) {
		cout << "Enter the students\' score. Enter a negative value to stop.  \n"
			 << "	[Physical size of the array is " << SIZE << "]." << endl << endl;

		count = loadArray(myArray, SIZE, M);

		cout << endl << "\n\tDone loading scores" << endl
			 << "\tLogical size is: " << count << endl << endl;  

		cout << "Hit ENTER to see the array: ";
		cin.get();

		cout << endl << "Now printing the scores:" << endl;  
		printArray(myArray, count);

		if (myArray[0] < 0)
			cout << "\n	There is NO data in your array. Please try again.";
		else
		    printStats(myArray, count);                        

		cout << endl << endl << "	=================================== " << endl << endl;
		
		count = 0;
	}
}