#include "Function Headers.h";

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
	cin.ignore(80, '\n'); 
	return x;
}

double underH(const double m){
	double x = noLetter();
	
	while (x > m){
		cout << "Invalid score. Scores cannot be greater than 100. Try again: ";
		x = noLetter();
	}
	return x;
}

void printArray(const double myArray[], int s){
	for (int i = 0; i < s; i++)
		cout << setw(8) << left << myArray[i] << (((i+1)%5) == 0 ? "\n" : " "); 
}

int loadArray(double myArray[], int s, double m){
	int count = 0;

	while (count < s) {
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

int getMaxIndex(const double myArray[], int s){
	int maxIndex = 0;

	for (int i = 0; i < s; i++)
		if (myArray[maxIndex] < myArray[i])
			maxIndex = i;

	return maxIndex;
}

double getMax(const double myArray[], int s){
	return myArray[getMaxIndex(myArray, s)];
}

int getMinIndex(const double myArray[], int s){
	int minIndex = 0;

	for (int i = 0; i < s; i++)
		if (myArray[minIndex] > myArray[i])
			minIndex = i;

	return minIndex;
}

double getMin(const double myArray[], int s){
	return myArray[getMinIndex(myArray, s)];
}

double getAve(const double myArray[], int s){
	double ave = 0;
	for (int i = 0; i < s; i++)
		ave += myArray[i];
	return ave / s;
}

void printStats(const double myArray[], int s){
	cout << "\n\n	*** The highest score is :\t" << getMax(myArray, s) << endl
		 << "	*** The lowest score is  :\t" << getMin(myArray, s) << endl
		 << "	*** The average score is :\t" << getAve(myArray, s);
}