// Fig. 17.8: Fig17_08.cpp
// Credit inquiry program.
#include <iostream>
using std::cerr;
using std::cin;
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

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <cstdlib>
using std::exit;

enum RequestType { ZERO_BALANCE = 1, CREDIT_BALANCE, DEBIT_BALANCE, END };
int getRequest();
bool shouldDisplay( int, double );
void outputLine( int, const string, double );

int main()
{
	ifstream inClientFile( "clients.dat", ios::in );
	
	if( !inClientFile )
	{
		cerr << "File could not be opened!" << endl;
		exit( 1 );
	}

	int request;
	int account;
	char name[ 30 ];
	double balance;

	request = getRequest();

	while( request != END )
	{
		switch( request )
		{
			case ZERO_BALANCE:
				cout << "\nAccounts with zero balance:\n";
				break;
			case CREDIT_BALANCE:
				cout << "\nAccounts with credit balance:\n";
				break;
			case DEBIT_BALANCE:
				cout << "\nAccounts with debit balance:\n";
				break;
		}

		inClientFile >> account >> name >> balance;

		while( !inClientFile.eof() )
		{
			if( shouldDisplay( request, balance ) )
				outputLine( account, name, balance );
			
			inClientFile >> account >> name >> balance;
		}

		inClientFile.clear();
		inClientFile.seekg( 0 );

		request = getRequest();
	}

	cout << "End of run" << endl;
	return 0;
}

int getRequest()
{
	int request;
	
	cout << "\nEnter request" << endl
		<< " 1 - List accounts with zero balances" << endl
		<< " 2 - List accounts with credit balances" << endl
		<< " 3 - List accounts with debit balances" << endl
		<< " 4 - End of run." << fixed << showpoint;

	do
	{
		cout << "\n? ";
		cin >> request;
	}while( request < ZERO_BALANCE && request > END )

	return request;
}

bool shouldDisplay( int type, double balance )
{
	if( type == ZERO_BALANCE && balance == 0 )
		return true;
	if( type == CREDIT_BALANCE && balance < 0 )
		return true;
	if( type == DEBIT_BALANCE && balance > 0 )
		return true;

	return false;
}

void outputLine( int account, const string name, double balance )
{
	cout << left << setw( 10 ) << account << setw( 13 ) << name
		setw( 7 ) << setprecision( 2 ) << right << balance << endl;
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
