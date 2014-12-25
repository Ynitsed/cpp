// Payroll
// Group Project 1
// Kaili Lu, Henk Reder
// Last Modified 6-16-13

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	unsigned int H1, H2, H3, H4, H5;
	double P1, P2, P3, P4, P5;

	cout << "\tThis program creates a nicely formatted table\n"
		 << "\t             Sample Solution by\n"
		 << "\t                   Kaili Lu\n\n\n";

	cout << "Hours worked Employee #1 [Only whole hours will be credited]: ";
	cin  >> H1;   cin.ignore(80, '\n');
	cout << "Hourly pay rate for Employee #1 [not necessarily whole dollars]: ";
	cin  >> P1;   cin.ignore(80, '\n');

	cout << "\nHours worked Employee #2 [Only whole hours will be credited]: ";
	cin  >> H2;   cin.ignore(80, '\n');
	cout << "Hourly pay rate for Employee #2 [not necessarily whole dollars]: ";
	cin  >> P2;   cin.ignore(80, '\n');

	cout << "\nHours worked Employee #3 [Only whole hours will be credited]: ";
	cin  >> H3;   cin.ignore(80, '\n');
	cout << "Hourly pay rate for Employee #3 [not necessarily whole dollars]: ";
	cin  >> P3;   cin.ignore(80, '\n');

	cout << "\nHours worked Employee #4 [Only whole hours will be credited]: ";
	cin  >> H4;   cin.ignore(80, '\n');
	cout << "Hourly pay rate for Employee #4 [not necessarily whole dollars]: ";
	cin  >> P4;   cin.ignore(80, '\n');

	cout << "\nHours worked Employee #5 [Only whole hours will be credited]: ";
	cin  >> H5;   cin.ignore(80, '\n');
	cout << "Hourly pay rate for Employee #5 [not necessarily whole dollars]: ";
	cin  >> P5;   cin.ignore(80, '\n');
	cout << "\n\n\n";


	cout << "\tEmployee#"<<setw(13)<<"Hours"<<setw(16)<<"Pay Rate"<<setw(17)<<"Total Pay\n"
		<< "\t\b========================================================\n"
		<< "\t\b" << setw(6) << "1" << setw(16) << H1 << setw(9) << "$" << setw(8) 
		<< setprecision(2) << fixed << P1 << setw(7) << "$" << setw(9) << setprecision(2) << fixed << H1*P1
		<< "\n\t\b" << setw(6) << "2" << setw(16) << H2 << setw(9) << "$" << setw(8) 
		<< setprecision(2) << fixed << P2 << setw(7) << "$" << setw(9) << setprecision(2) << fixed << H2*P2
		<< "\n\t\b" << setw(6) << "3" << setw(16) << H3 << setw(9) << "$" << setw(8) 
		<< setprecision(2) << fixed << P3 << setw(7) << "$" << setw(9) << setprecision(2) << fixed << H3*P3
		<< "\n\t\b" << setw(6) << "4" << setw(16) << H4 << setw(9) << "$" << setw(8) 
		<< setprecision(2) << fixed << P4 << setw(7) << "$" << setw(9) << setprecision(2) << fixed << H4*P4
		<< "\n\t\b" << setw(6) << "5" << setw(16) << H5 << setw(9) << "$" << setw(8) 
		<< setprecision(2) << fixed << P5 << setw(7) << "$" << setw(9) << setprecision(2) << fixed << H5*P5
		<< "\n\t\b\bTOTAL/AVERAGE" << setw(10) << H1 + H2 + H3 + H4 + H5 << setw(9) << "$" << setw(8) 
		<< setprecision(2) << fixed << (P1 + P2 + P3 + P4 + P5)/5 << setw(7) << "$" << setw(9) << setprecision(2) 
		<< fixed << (H1*P1+H2*P2+H3*P3+H4*P4+H5*P5)/5 << "\n\n";
	
	cout << "\nPlease hit ENTER to terminate the program.";
	cin.get();
}
