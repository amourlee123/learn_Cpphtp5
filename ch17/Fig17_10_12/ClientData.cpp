// Fig. 17.11: ClientData.cpp
// Class ClientData stores customer's credit information.
#include <string>
using std::string;

#include "ClientData.h"

ClientData::ClientData( int accountNumberValue,
	string lastNameValue, string firstNameValue, double balanceValue )
{
	setAccountNumber( accountNumberValue );
	setLastName( lastNameValue );
	setFirstName( firstNameValue );
	setBalance( balanceValue );
}

void ClientData::setAccountNumber( int accountNumberValue )
{
	accountNumber = accountNumberValue;
}

int ClientData::getAccountNumber() const
{
	return accountNumber;
}

void ClientData::setLastName( string lastNameString )
{
	const char *lastNameValue = lastNameString.data();
	int length = lastNameString.size();
	length = ( length < 15 ? length : 14 );
	strncpy( lastName, lastNameValue, length );
	lastName[ length ] = '\0';
}

string ClientData::getLastName() const
{
	return lastName;
}

void ClientData::setFirstName( string firstNameString )
{
	const char *firstNameValue = firstNameString.data();
	int length = firstNameString.size();
	length = ( length < 10 ? length : 10 );
	strncpy( firstName, firstNameValue, length );
	firstName[ length ] = '\0';
}

string ClientData::getFirstName() const
{
	return firstName;
}

void ClientData::setBalance( double balanceValue )
{
	balance = balanceValue;
}

double ClientData::getBalance() const
{
	return balance;
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
