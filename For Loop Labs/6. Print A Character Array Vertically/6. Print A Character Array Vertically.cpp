// Print Array Vertically
// This Program prints the array vertically
// Kaili Lu
// 7-8-13

#include <iostream>
using namespace std;

void main(){
	const int SIZE = 80;
	char ch[SIZE];
	int i;

	cout << "\n\t             This project uses a for loop to"
		<< "\n\tprint a character array vertically one character at a time"
		<< "\n\t                    by H. Delta\n\n\n";

	while (true){
		cout << "What is your name? ";
		cin.getline(ch, SIZE, '\n');

		for ( i = 0; ch[i] != '\0'; i++)
			cout << ch[i] << endl;

		system("pause");
	}
}