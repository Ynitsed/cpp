// Mid-Term
// Tell The User the highest score
// Kaili Lu
// Last Modified 2:19 3/26/13

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void main(){
	const int SIZE = 80;
	char name[SIZE], ch;
	int studentNumber, bestGrade = 0, sum = 0;
	double grade; 
	string bestStudent;

	cout << "\n\t\tMidterm Coding Part"
		 << "\n\t\t   Kaili Lu\n\n";

	while (true){
		cout << "\nHow many students do you have in your class? ";
		cin  >> studentNumber;   cin.ignore(80, '\n');

		while (!cin){
			cout << "\tOnly numbers please! Try again: ";
			cin.clear();   cin.ignore(80, '\n');
			cin  >> studentNumber;  cin.ignore(80, '\n');
		}

		if (studentNumber == 0)
			cout << "\n\tThere are no students to perform statistics on.\n\n";

		else{ 
			for ( int i = 1; i <= studentNumber; i++){
				cout << "What is the student's " << i << " name? ";
				cin  >> ch;  
				if (ch <= 'z' && ch >='a')
					ch = ch + 'A' - 'a';
				cin.putback(ch);   cin.getline(name, SIZE, '\n');

				cout << "What is \"" << name << "'s\" midterm grade? ";
				cin  >> grade;  

				while (!cin || grade < 0 || grade != int(grade) ) {
					if (!cin)
						cout << "\tOnly numbers please! Try again: ";
					else if (grade < 0)
						cout << "\tMidterm grade must be a positive number. Try again: ";
					else
						cout << "\tMidterm grade must be a whole number. Try again: ";
					
					cin.clear();   cin.ignore(80, '\n');
					cin >> grade;
				}
				sum += grade;

				if (bestGrade <= grade){
					bestGrade = grade;
					bestStudent = name;
				}
			}
			cout << "\n\tYour best student is " << bestStudent << " and he/she got " << bestGrade
				 << "\n\tThe average score grade was " << setprecision(2) << fixed << sum / double(studentNumber) << endl << endl;
		}
		system("pause");
		cout << "\n\t\t************************************\n\n";
		cin.clear();
	}
}


