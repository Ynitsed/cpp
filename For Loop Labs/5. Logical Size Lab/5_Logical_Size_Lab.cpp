// This project uses a for loop to find the logical size of a character array
// Logical Size Labs
// Kaili Lu
// 7-7-13

#include <iostream>
using namespace std;

void main(){
	const int SIZE = 80;
	char ch[SIZE];
	int i;

	cout << "\n\t     This project uses a for loop to"
		 << "\n\tfind the logical size of a character array"
		 << "\n\t             by Kaili Lu\n\n";

	while (true){
		cout << "\nWhat is your name? ";
		cin.getline(ch, '\n');

		for ( i = 0; ch[i] != '\0'; i++);

		cout << "The string length is " << i << "\n";

		system("pause");
	}
}
