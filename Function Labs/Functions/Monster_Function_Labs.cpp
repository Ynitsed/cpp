// Function Labs
// 7 Step Function Labs
// Kaili Lu
// Last modified 7-22-13

#include <iostream>
#include "Basic Codes.h"
using namespace std;

void main(){
	double x = 0, input = 0, s = 0, e = 0;
	int intTemp, y;
	char ch;

	printBanner();

	while (true) {
		/////////////         PART 1         /////////////                  
		cout << "\nPart 1 (get positive number - assume number is entered)"
			 << "\n   **  write and use the getPos() function   **"
		 	 << "\nEnter a number: ";
		x = getPos();
		cout << "\tGood! "<< x << " is a positive number!\n\n";
		/////////////         PART 2         /////////////                     
		cout << "\nPart 2 (get positive number - no assumption)"
			 << "\n   **  write and use the getPosNum() function   **"
			 << "\nEnter a number: ";
		x = getPosNum();
		cout << "\tGood! "<< x << " is a positive number!\n\n";
		/////////////         PART 3         /////////////     
		cout << "\nPart 3 (get a multiple of 5)"
			 << "\n   **  write and use the getMultOfNum() function   **"
			 << "\nEnter a multiple of 5: ";
		x = getMultOf5();
		cout << "\tGood! "<< x << " is a multiple of 5!\n\n";
		/////////////         PART 4         /////////////               
		cout << "\nPart 4 (get a letter)"
			 << "\n   **  write and use the getLetter() function   **"
			 << "\nEnter a letter: ";
		ch = getLetter();
		cout << "\tGood! \' " << ch << " \' is a letter!\n\n";
		/////////////         PART 5         /////////////               
		cout << "\nPart 5 (get a number between [s,e])"
			 << "\n   **  write and use the getInRange(s,e) function   **"
			 << "\nWhat is the starting point? ";
		s = getNum();

		cout << "What is the ending point? ";
		e = getNum();

		cout << "\nEnter a number in range [" << s << ", " << e << "]: ";
		input = getInRange(s, e);

		cout << "\tGood! "<< input << " is a number in range [" << s << ", " << e << "]\n\n";
		/////////////         PART 6         ///////////// 
		cout << "\nPart 6 (get a perfect square)"
			 << "\n   **  write and use the getPerfectSquare() function   **"
			 << "\nEnter a perfect square? ";
		input = getPerfectSquare();

		cout << "\tGood! "<< input << " is a perfect square \n\n";
		/////////////         PART 7         ///////////// 

		cout << "\nPart 7 (get a multiple of n)"
			 << "\n   **  write and use the getMultOfNum(int) function   **"
			 << "\nWhat number you wish to get the multiple of? ";
		intTemp = getWholeNum();

		cout << "\nEnter a multiple of " << intTemp << ": ";
		input = getMultOfNum(intTemp);

		cout << "\tGood! "<< input << " is a multiple of " << intTemp << "\n";
		cout << "\t***************************\n\n";
	}
}

