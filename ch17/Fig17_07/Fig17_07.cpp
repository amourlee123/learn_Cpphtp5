// Fig. 17.7: Fig17_07.cpp
// Reading and printing a sequential file.
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

#include <fstream>
using std::ifstream;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <string>
using std::string;

#include <cstdlib>
using std::exit;

void outputLine( int, const string, double );

int main()
{
	ifstream inClientFile( "clients.dat", ios::in );

	if( !inClientFile )
	{
		cout << "File could not be opened" << endl;
		exit( 1 );
	}

	int account;
	char name[ 30 ];
	double balance;

	cout << left << setw( 10 ) << "Account" << setw( 13 )
		<< "Name" << "Balance" << endl << fixed << showpoint;

	while ( inClientFile >> account >> name >> balance )
	{
		outputLine( account , name, balance );
	}

	return 0;
}

void outputLine( int account, const string name, double balance )
{
	cout << left << setw( 10 ) << account << setw( 13 ) << name
		<< setw( 7 ) << setprecision( 2 ) << right << balance << endl; 
}



/**************************************************************************
 * (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
