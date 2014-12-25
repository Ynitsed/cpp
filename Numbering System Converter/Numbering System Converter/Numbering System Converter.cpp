//  Numbering System Converter
//
//  Created by Gabriel K. Lu on 7/10/13.
//  Copyright (c) 2013 Gabriel K. Lu. All rights reserved.

#include <iostream>
using namespace std;

int main(){
	double base;
	int length, i, value, result, exponent;
	bool flag = true;
	const int SIZE = 70;
	char num[SIZE];


	cout << "\n\t This program converts an integer number (up to 70 digits long)" 
		<< "\n\t                    from any base to decimal"
		<< "\n\t                          by Kaili Lu"
		<< "\n\t                    Includes input Validation"
		<< "\n\tincludes any bases upto 36 and accepts both upper and lower letters\n\n\n";

	while (true){
		cout  << "What is the current base? ";

		while ( !(cin >> base) || (base < 2 || base > 36) || base != int(base) ) {
			cin.ignore(80, '\n');

			if ( !cin ){
				cin.clear();   cin.ignore(80, '\n');
				cout << "\tDigits only please. Try again: ";
			}

			else if (base < 2 || base > 36)
				cout << "\tInvalid base. Base must be " << ( base < 2 ? ">= 2 " : "<= 36 " ) << ". Please try again: ";
			else
				cout << "\tIntegers only please. Try again: ";
		}
		cin.ignore(80, '\n');
		//------------------------------------base validation finished------------------------------------//
		cout << "\nWhat is the number you want to convert to decimal? ";
		cin.getline(num, SIZE, '\n');

		while(flag) {
			for (  i = 0; num[i] != '\0'; i++);
			length = i;

			for ( int i = 0 ; i <= SIZE; i++){
				if ( 'a' <= num[i] && num[i] <= 'z')
					num[i] = char ( num[i] + ( 'A' - 'a' ) );  // lower to upper
			}

			num[i] = int (num[i] - 'A' + 10);

			if ( num[i] > base || num[i] < 10 ) 
				cout << "\tYour number contains invalid digits. Try again: ";
			else 
				flag = false;
			break;
		}
		//------------------------------------number validation finished------------------------------------//

		for ( length--, result = 0, exponent = 0; i >= 0; length--, exponent++ )
			result += ( int (num[i] * pow (base, exponent) ) );
		cout << "\n" << num << " in base " << base << " coverted to decimal is " << result;
	}
}








/*
cout << "\nWhat is the number you want to convert to decimal? ";
cin.getline(num, SIZE, '\n');

for ( int i = 0 ; i <= SIZE; i++) {
if ( ( 'a' <= num[i] && num[i] <= 'z' || 'A' <= num[i] && num[i] <= 'Z' || 0 <= num[i] && num[i] <= 9) ){

if ( 'a' <= num[i] && num[i] <= 'z')
num[i] = char ( num[i] + ( 'A' - 'a' ) );  // lower to upper

if ( 'A' <= num[i] && num[i] <= 'Z')
num[i] = int (num[i] - 'A' + 10);

if ( num[i] >= base )

cout  << "\tYour number contains invalid digits. Try again: ";

}
else {
cout  << "\tYour number contains invalid digits. Try again: ";

}
cin >> num;
}


}
cout << num;
}

*/