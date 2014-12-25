// Out put odd numbers
// Out put odd numbers from whatever two doubles
// Kaili Lu
// Last Modified 7-8-2013

#include <iostream>
using namespace std;

void main(){
	double start, end;
	int count;

	cout << "\n\tThis program will output ODD numbers in a user inputed a range.\n"
		 << "\t                           By Kaili Lu\n";

	while(true)	{
		cout << "\n\nEnter the starting point of the range (double): ";
		cin  >> start;   cin.ignore(80, '\n');

		cout << "Enter the ending point of the range (double): ";
		cin  >> end;   cin.ignore(80, '\n');

		count = ceil (start);

		while ( end <= start){
			cout << "Your ending number must be greater than your starting number.\n"
				 << "Please try a new ending number: ";
			cin  >> end;   cin.ignore(80, '\n');
		}

		for( (count%2 == 0 ? count ++ : count); count <= end ; count +=2 ){
			cout << int (count) << " ";
		}
	}
}