// Ask User's Name by char arraies and String
// Lab 4 Char array and sting
// Kaili Lu
// Last Modified

#include <iostream>
#include <string>
using namespace std;

void main()
{
	const int ARRAY_SIZE = 20;
	char name[ARRAY_SIZE], ch;
	string name1;

	cout << "\n\tAsk User's Name by char Array"
		 << "\n\t          Kaili Lu\n\n";

	cout << "What is your FULL name? ";
	cin >> ch;   cin.putback(ch);
	cin.getline(name, ARRAY_SIZE, '\n');

	cout << "Hello \"" << name << "\".\n\n";

	system("pause");

	///////////////////////////////////////////////////

	cout << "\n\tAsk User's Name by string"
		<< "\n\t          Kaili Lu\n\n";

	cout << "What is your FULL name? ";
	cin >> ch;  cin.putback(ch);
	getline(cin, name1);

	cout << "Hello \"" << name1 << "\".\n\n";

	system("pause");
}
