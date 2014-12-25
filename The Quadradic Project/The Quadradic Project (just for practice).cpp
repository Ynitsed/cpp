// This program finds the types and number of solutions of a quadratic equation
// The Quadradic Project ( just for practice )
// Kaili Lu
// Last modified 3-4-2013 2:03

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double valueA, valueB, valueC,realPart, imaginaryPart1, imaginaryPart2;
	string Answer_Number;
	string Answer_Type;

	while ( true )
	{
		cout << "\n\tThis program finds the types and number of"
			 << "\n\t    solutions of a quadratic equation"
			 << "\n\t               by Kaili Lu\n\n"; // barner
		system("color F3");

		cout << "Enter the value of a: ";/////////////////////////////start input a
		cin  >> valueA;

		while ( !cin >> int( valueA ) )
		{
			if ( !cin )
				cout << "Only numbers please: ";
			cin.clear();   cin.ignore( 80,'\n' );
			cin >> valueA; 
		} 
		//////////////////////////////////////////////////////////////////////end input a
		cout << "Enter the value of b: ";/////////////////////////////start input b
		cin.clear();   cin.ignore( 80,'\n' );
		cin  >> valueB;

		while ( ( !cin >> int( valueB ) ) )
		{
			if ( !cin )
				cout << "Only numbers please: ";
			cin.clear();   cin.ignore( 80,'\n' );
			cin >> valueB; 
		} 
		//////////////////////////////////////////////////////////////////////end input b
		cout << "Enter the value of c: ";/////////////////////////////start input c
		cin.clear();   cin.ignore( 80,'\n' );
		cin  >> valueC;

		while ( ( !cin >> int( valueC ) ) )
		{
			if ( !cin )
				cout << "Only numbers please: ";
			cin.clear();   cin.ignore( 80,'\n' );
			cin >> valueC; 
		}
		////////////////////////////////////////////////////////////////////// end input c
		realPart = -valueB / ( 2*valueA ); // real part result
		imaginaryPart1 = sqrt( valueB*valueB - 4*valueA*valueC ) / ( 2*valueA ); // imaginary part 1
		imaginaryPart2 = sqrt( -valueB*valueB + 4*valueA*valueC ) / ( 2*valueA ); // imaginary part 1
		////////////////////////////////////////////////////////////////////// calculate
		cout << "Your equation is: " << valueA << "x^2 + " << valueB << "x + " << valueC << " = 0\n\n";

		switch ( int( valueA ) ){
		case 1: cout << "x^2 + ";   break;
		case -1: cout << "-x^2 + ";    break;
		case 0: cout << "";    break;
		default: cout << valueA << "x^2 + ";
		}
		switch ( int( valueB ) ){
		case 1: cout << "x + ";   break;
		case -1: cout << "-x + ";    break;
		case 0: cout << "";   break;
		default: cout << valueB << "x + ";
		}//display

		if ( valueA != 0 )
		{
			cout << valueC << " = 0 has " << Answer_Number << Answer_Type << "solution" << (Answer_Number == "ONE" ? "":"s") 
				<< "and " << (Answer_Number == "ONE" ? "it is: " : "they are: ");

			if ( valueB != 0 )
			{
				if ( valueC != 0 )
				{
					if ( int ( valueB*valueB - 4*valueA*valueC > 0 ) )
					{
						Answer_Number = "TWO ";   Answer_Type = "REAL ";
						cout << "\n\tx1 = "  << setprecision(3) << realPart + imaginaryPart1
							 << "\n\tx2 = "  << setprecision(3) << realPart - imaginaryPart1 << "\n\n\n";
					}
					else if( int ( valueB*valueB - 4*valueA*valueC < 0 ) )
					{ 
						Answer_Number = "TWO ";   Answer_Type = "IMAGINARY ";
					cout << "\n\tx1 = "  << setprecision(3) << realPart << " + "  << setprecision(3) << imaginaryPart2 << "i"
						 << "\n\tx2 = "  << setprecision(3) << realPart << " - "  << setprecision(3) << imaginaryPart2 << "i" << "\n\n\n";
					}
					else
					{   
						Answer_Number = "ONE ";   Answer_Type = "DOUBLE ";
						cout << "\n\tx1 = x2 = "  << realPart + imaginaryPart1 << "\n\n\n";
					}
				}
				else // valueC == 0
				{
					Answer_Number = "TWO ";   Answer_Type = "REAL ";
					cout << "\n\tx1 = " << setprecision(3) << realPart + imaginaryPart1
						 << "\n\tx2 = " << setprecision(3) << realPart - imaginaryPart1 << "\n\n\n";
				}
			}

			else // valueB == 0
			{
				if ( valueC != 0 )
				{
					if ( valueA > 0 && valueC > 0 ||  valueA < 0 && valueC < 0 )
					{
						Answer_Number = "TWO ";   Answer_Type = "IMAGINARY ";
						cout << "\n\tx1 = "  << setprecision(3) << sqrt( valueC/valueA ) << "i"
							 << "\n\tx2 = "  << setprecision(3) << -sqrt( valueC/valueA ) << "i" << "\n\n\n";
					}
					else 
					{
						Answer_Number = "TWO ";   Answer_Type = "REAL ";
						cout << "\n\tx1 = "  << setprecision(3) << sqrt( -valueC/valueA ) 
							 << "\n\tx2 = "  << setprecision(3) << -sqrt( -valueC/valueA ) << "\n\n\n";
					}
				}
				else // valueC == 0
				{
					Answer_Number = "ONE ";   Answer_Type = "DOUBLE ";
					cout << "\n\tx1 = x2 = 0\n\n\n";
				}
			} // when a!=0 and b == 0
		}
		
		else
		{
			if ( valueB != 0 ) 
			{
				if ( valueC != 0 )
					cout << valueC << " = 0 is actually a linear equation and has ONE REAL solution: \n"
					     << "\tx1 = "  << -valueC/valueB << "\n\n\n";
			}
			else
			{
				if ( valueC !=0 )
					cout << valueC << " = 0 has NO VALUE of x that makes it true.\n\n\n";
				else
					cout << "0 = 0 is true for ANY VALUE of x." << "\n\n\n";
			}
		}
		cout << "\t\tTo contine hit ENTER or\n\nPress CONTROL C at any time to quit the program";

		cin.clear();   cin.ignore( 80,'\n' );   cin.get(); 
		system( "cls" );
	}
}
////fu*k! finally done! Delta, i can't shorten it into 137 line.