// Fig. 17.15: Fig17_15.cpp
// This program reads a random access file sequentially, updates
// data previously written to the file, creates data to be placed
// in the file, and deletes data previously in the file.
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

#include <fstream>
using std::ofstream;
using std::ostream;
using std::fstream;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cstdlib>
using std::exit;

#include "ClientData.h"

int enterChoice();
void createTextFile( fstream& );
void updateRecord( fstream& );
void addRecord( fstream& );
void deleteRecord( fstream& );
void outputLine( ostream&, const ClientData & );
int getAccount( const char * const );

enum Choices { PRINT = 1, UPDATE, NEW, DELETE, END };

int main()
{
	fstream inOutCredit( "credit.dat", ios::in | ios::out );

	if( !inOutCredit )
	{
		cerr << "File could not be opened." << endl;
		exit( 1 );
	}

	int choice;

	while( ( choice = enterChoice() ) != END )
	{
		switch( choice )
		{
			case PRINT:
				createTextFile( inOutCredit );
				break;
			case UPDATE:
				updateRecord( inOutCredit );
				break;
			case NEW:
				addRecord( inOutCredit );
				break;
			case DELETE:
				deleteRecord( inOutCredit );
			default:
				cerr << "Incorrect choice" << endl;
				break;
		}
	
		inOutCredit.clear();
	}

	return 0;
}


int enterChoice()
{
	cout << "\nEnter your choice" << endl
		<< "1 - store a formatted text file of accounts" << endl
		<< "    called \"print.txt\" for printing" << endl
		<< "2 - update an account" << endl
		<< "3 - add a new account" << endl
		<< "4 - delete an account" << endl
		<< "5 - end program\n? ";

	int menuChoice;
	cin >> menuChoice;
	return menuChoice;
}


void createTextFile( fstream &readFromFile )
{
	ofstream outPrintFile( "print.txt", ios::out );

	if( !outPrintFile )
	{
		cerr << "File could not be created." << endl;
		exit( 1 );
	}

	outPrintFile << left << setw( 10 ) << "Account" << setw( 16 )
			<< "Last Name" << setw( 11 ) << "First Name" << right
			<< setw( 10 ) << "Balance" << endl;

	readFromFile.seekg( 0 );

	ClientData client;
	readFromFile.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );

	while( !readFromFile.eof() ) 
	{
		if( client.getAccountNumber() != 0 )
			outputLine( outPrintFile, client );

		readFromFile.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );
	}
}

void updateRecord( fstream &updateFile )
{
	int accountNumber = getAccount( "Enter account to update" );

	updateFile.seekg( ( accountNumber - 1 ) * sizeof( ClientData ) );

	ClientData client;

	updateFile.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );

	if( client.getAccountNumber() != 0 )
	{
		outputLine( cout, client );

		cout << "\nEnter charge (+) or payment (-): ";
		double translation;
		cin >> translation;

		double oldBalance = client.getBalance();
		client.setBalance( oldBalance + translation );
		outputLine( cout, client );

		updateFile.seekp( ( accountNumber - 1 ) * sizeof(ClientData) );
		updateFile.write( reinterpret_cast< char * >( &client ), sizeof( ClientData) );
	}
} 

void addRecord( fstream &insertInFile )
{
	int accountNumber = getAccount( "Enter new account number" );

	insertInFile.seekg( (accountNumber - 1 ) * sizeof( ClientData ) );

	ClientData client;
	insertInFile.read( reinterpret_cast< char * >( & client ), sizeof( ClientData ) );

	if( client.getAccountNumber() == 0 )
	{
		char lastName[ 15 ];
		char firstName[ 10 ];
		double balance;

		cout << "Enter lastname, firstname, balance\n? ";
		cin >> setw( 15 ) >> lastName;
		cin >> setw( 10 ) >> firstName;
		cin >> balance;

		client.setLastName( lastName );
		client.setFirstName( firstName );
		client.setBalance( balance );
		client.setAccountNumber( accountNumber );

		insertInFile.seekp( (accountNumber - 1 ) * sizeof( ClientData) );

		insertInFile.write( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );
	}
	else
	{
		cerr << "Account #" << accountNumber
			<< " already contains information." << endl;
	}	
}

void deleteRecord( fstream &deleteFromFile )
{
	int accountNumber = getAccount( "Enter account to delete" );

	deleteFromFile.seekg( ( accountNumber - 1 ) * sizeof( ClientData ) );

	ClientData client;
	deleteFromFile.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );

	if( client.getAccountNumber() != 0 )
	{
		ClientData blankClient;
	
		deleteFromFile.seekp( (accountNumber - 1 ) * sizeof( ClientData ) );

		deleteFromFile.write( reinterpret_cast< char * >( &blankClient ), sizeof( ClientData ) );

		cout << "Account #" << accountNumber << " deleted.\n";
	}
	else
	{
		cerr << "Account #" << accountNumber << " is empty.\n";
	}
}

void outputLine( ostream &output, const ClientData &record )
{
	output << left << setw( 10 ) << record.getAccountNumber()
		<< setw( 16 ) << record.getLastName()
		<< setw( 11 ) << record.getFirstName()
		<< setw( 10 ) << setprecision( 2 ) << right << fixed
		<< showpoint << record.getBalance() << endl;
}

int getAccount( const char * const prompt )
{
	int accountNumber;

	do
	{
		cout << prompt << " (1 - 100): ";
		cin >> accountNumber; 
	}while ( accountNumber < 1 || accountNumber > 100 );

	return accountNumber;
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
