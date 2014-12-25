/* This program loads an array of doubles with students' score using a negative value as the loop's sentinel
   setting physical size to 3 for easy testing   
   Array of Scores
   Kaili Lu
   5-10-13*/


#include <iostream>
#include <iomanip>
using namespace std;

// Pre    None
void printTitle();
// Post   None

// Pre    0 <= s <= the PHYSICAL size of myArray[]
int loadArray(double myArray[], int s, double m);
// Post   Returns the LOGICAL size of myArray[], loads the scores into the cells within the LOGICAL size of myArray[]

// Pre    None
double noLetter();
// Post   Returns double and does not crash for non-numeric input, removes the rest of the line from cin

// Pre    None
double underH(double m);
// Post   Returns a double <= m, does not crash for non-numeric input, and removes the rest of the line from cin

// Pre    0 <= s <= the LOGICAL size of myArray[]
void printArray(double myArray[], int s);
// Post   Prints the first s element of myArray[] in 5 numbers per line

// Pre    0 <= s <= the LOGICAL size of myArray[]
int getMaxIndex(double myArray[], int s);
// Post   Return the index of the cell that contains the maximum value in the first s elements of myArray[]

// Pre    0 <= s <= the LOGICAL size of myArray[]
double getMax(double myArray[], int s);
// Post   Return the maxmimum value contained in the first s elements of myArray[]

// Pre    0 <= s <= the LOGICAL size of myArray[]
int getMinIndex(double myArray[], int s);
// Post   Return the index of the cell that contains the minimum value in the first s elements of myArray[]

// Pre    0 <= s <= the LOGICAL size of myArray[]
double getMin(double myArray[], int s);
// Post   Return the minimum value contained in the first s elements of myArray[]

// Pre    0 <= s <= the LOGICAL size of myArray[]
double getAve(double myArray[], int s);
// Post   Return the average of the data contained in the first s elements of myArray[]

// Pre    0 <= s <= the LOGICAL size of myArray[]
void printStats(double myArray[], int s);
// Post   Print the maximun, minimum, and average values contained in the first s element of myArray[]

void main(){
	const int SIZE = 30;
	const double M = 100;
	double myArray[SIZE];
	int count;

	printTitle();

	while (true)
	{
		cout << "Enter the students\' score. Enter a negative value to stop.  \n"
			 << "	[Physical size of the array is " << SIZE << "]." << endl << endl;

		count = loadArray(myArray, SIZE, M);

		cout << endl << "\n\tDone loading scores" << endl
			<< "\tLogical size is: " << count << endl << endl;  // Show the logical size

		cout << "Hit ENTER to see the array: ";
		cin.get();

		cout << endl << "Now printing the scores:" << endl;  // Print the scores within the logical size
		printArray(myArray, count);

		if (myArray[0] < 0)
			cout << "\n	There is NO data in your array. Please try again.";
		else
		    printStats(myArray, count);                        // Print maximum, minimum, average value

		cout << endl << endl << "	=================================== " << endl << endl;

		count = 0;
	}

}


void printTitle(){
	cout << "\t\tThis program loads an array of doubles with students' score   \n"
		 << "\t\t      using a negative value as the loop's sentinel           \n"
		 <<	"\t\t              calculate basic statistics                     \n"
		 << "\t\t   setting physical size to 30 and default per line 5       \n"
		 << "\t\t                     by Kaili Lu                           \n\n\n";
}

double noLetter(){  
	double x;

	while ( !(cin >> x) ){
		cin.clear();   cin.ignore(80, '\n');
		cout << "Number only please. Try again: ";
	}
	cin.ignore(80, '\n');       // Ignore the non-numerical characters left in the buffer
	return x;
}

double underH(double m){
	double x = noLetter();
	
	while (x > m){
		cout << "Invalid score. Scores cannot be greater than 100. Try again: ";
		x = noLetter();
	}
	return x;
}

void printArray(double myArray[], int s){
	for (int i = 0; i < s; i++)
		cout << setw(8) << left << myArray[i] << (((i+1)%5) == 0 ? "\n" : " "); 
}

int loadArray(double myArray[], int s, double m){
	int count = 0;

	while (count < s)
	{
		cout << "Enter score for student " << count + 1 << ": ";
		myArray[count] = underH(m);

		if (myArray[count] < 0)
			break;

		count++;
	}
	if (count == s)
		cout << endl << "Array FULL! Cannot accept any more scores";

	return count;
}

int getMaxIndex(double myArray[], int s){
	int maxIndex = 0;

	for (int i = 0; i < s; i++)
		if (myArray[maxIndex] < myArray[i])
			maxIndex = i;

	return maxIndex;
}

double getMax(double myArray[], int s){
	return myArray[getMaxIndex(myArray, s)];
}

int getMinIndex(double myArray[], int s){
	int minIndex = 0;

	for (int i = 0; i < s; i++)
		if (myArray[minIndex] > myArray[i])
			minIndex = i;

	return minIndex;
}

double getMin(double myArray[], int s){
	return myArray[getMinIndex(myArray, s)];
}

double getAve(double myArray[], int s){
	double ave = 0;
	for (int i = 0; i < s; i++)
		ave += myArray[i];
	return ave / s;
}

void printStats(double myArray[], int s){
	cout << "\n\n	*** The highest score is :\t" << getMax(myArray, s) << endl
		 << "	*** The lowest score is  :\t" << getMin(myArray, s) << endl
		 << "	*** The average score is :\t" << getAve(myArray, s);
}