// Fig. 17.13: Fig17_13.cpp
// Writing to a random-access file.
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;

#include <fstream>
using std::fstream;

#include <cstdlib>
using std::exit;

#include "ClientData.h"

int main()
{
	int accountNumber;
	char lastName[ 15 ];
	char firstName[ 10 ];
	double balance;

	fstream outCredit( "credit.dat", ios::out | ios::in | ios::binary );

	if( !outCredit )
	{
		cerr << "File could not be opened." << endl;
		exit( 1 );
	}

	cout << "Enter account number (1 to 100, 0 to end input)\n? ";
	ClientData client;
	cin >> accountNumber;

	while (accountNumber > 0 && accountNumber <= 100 )
	{
		cout << "Enter lastname, firstname, balance\n? ";
		cin >> setw( 15 ) >> lastName;
		cin >> setw( 10 ) >> firstName;
		cin >> balance;

		client.setAccountNumber( accountNumber );
		client.setLastName( lastName );
		client.setFirstName( firstName );
		client.setBalance( balance );

		outCredit.seekp( ( client.getAccountNumber() - 1 ) * sizeof( ClientData ) );
		outCredit.write( reinterpret_cast< const char * >( &client ), sizeof( ClientData ) );

		cout << "Enter account number\n? ";
		cin >> accountNumber;
	}

	return 0;
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
