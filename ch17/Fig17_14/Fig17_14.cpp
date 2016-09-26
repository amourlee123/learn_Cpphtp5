// Fig. 17.14: Fig17_14.cpp
// Reading a random access file sequentially.
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cstdlib>
using std::exit;

#include <fstream>
using std::ifstream;
using std::ostream;

#include "ClientData.h"

void outputLine( ostream&, const ClientData & );

int main()
{
	ifstream inCredit("credit.dat", ios::in );

	if( !inCredit )
	{
		cerr << "File could not be opened." << endl;
		exit( 1 );
	}

	cout << left << setw( 10 ) << "Account" << setw( 16 )
		<< "Last Name" << setw( 11 ) << "First Name" << left << setw( 10 )
		<< right << "Balance" << endl;

	ClientData client;

	inCredit.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );

	while( inCredit && !inCredit.eof() )
	{
		if( client.getAccountNumber() != 0 )
			outputLine( cout, client );

		inCredit.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );
	}

	return 0;
}

void outputLine( ostream &output, const ClientData &record )
{
	output << left << setw( 10 ) << record.getAccountNumber()
		<< setw( 16 ) << record.getLastName()
		<< setw( 11 ) << record.getFirstName()
		<< setw( 10 ) << setprecision( 2 ) << right << fixed
		<< showpoint << record.getBalance() << endl;
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
