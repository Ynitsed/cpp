// Perfect or Deficient or Abundant
// Positive number classification as perfect, abundant or deficiant
// Kaili Lu
// Last modified 7-8-13

#include <iostream>
using namespace std;

void main() {
	int input, i, sum;
	
	cout << "\n\t\tPossitive number classification as"
		 << "\n\t\t  perfect, abundant or deficient"
		 << "\n\t\t           by Kaili Lu\n\n";

	while(true)	{
		cout << "\n\nEnter a number to be classified as perfect, abundant or deficient: ";
		cin >> input;   cin.ignore( 80, '\n' );

		while ( input < 1 ){
			cout << "This classification is for POSITIVE integers only. Please try again: ";
			cin >> input;   cin.ignore( 80, '\n' );
		}

		cout << input << " is ";

		for (i=1, sum = 0; i < input; i++ ){
			if (input%i == 0)
				sum += i;
		}
		
		if (sum == input)
			cout << "perfect.";
		else if (sum < input)
			cout << "deficient.";
		else
			cout << "abundant.";
	}
	cin.ignore( 80, '\n' );   cin.clear(); 
}