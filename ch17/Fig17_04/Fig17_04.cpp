// Fig. 17.4: Fig17_04.cpp
// Create a sequential file.
#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ios;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit;

int main()
{
	ofstream outClientFile( "clients.dat", ios::out );

	if( !outClientFile )
	{
		cerr << "File coule not opened" << endl;
		exit( 1 );
	}

	cout << "Enter the account, name, and balance." << endl
		<< "Enter end-of-file to end input.\n? ";

	int account;
	char name[ 30 ];
	double balance;

	while( cin >> account >> name >> balance )
	{
		outClientFile << account << ' ' << name << ' ' << balance << endl;
		cout << "? ";
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
