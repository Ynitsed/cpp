// Prime Numbers
// Find a number is prime or not
// Kaili Lu 
// Last Modified 3-12-2013 3:45

#include<iostream>
using namespace std;

void main(){
	bool isPrime;
	int input;
	

	cout << "\t         Classify a number as prime or not.\n"
		 << "\tUses for and bool flag as well as conditional operator.\n"
		 << "\t                    By Kaili Lu\n\n";

	while (true){
		isPrime = true;
		cout << "Give me an integer: ";
		cin  >> input;   cin.ignore(80,'\n');

		while (input <= 1){
			cout << "Prime numbers are defined for integers bigger than 1. Try again: ";
			cin  >> input;  cin.ignore(80,'\n'); 
		}
		
		/*
		for(int i = 2; i < input; i++){
			if( input%i == 0 ){
				isPrime = false;
				break;
			}
		}
		*/
		for (int i = 2; i < input && isPrime == true; i++)
			isPrime = ( input%i == 0 ?  false :  true );
		
		cout << input << " is " << ( isPrime? "" : "NOT ") << "a prime number.\n\n";
	}
}

