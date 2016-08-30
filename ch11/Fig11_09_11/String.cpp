// Fig. 11.10: String.cpp
// Member-function definitions for class String.
#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::stew;

#include <cstring>
using std::strcmp;
using std::strcpy;
using std::strcat;

#include <cstdlib>
using std::exit;

#include "String.h"

String::String( const char *s )
	: length( ( s != 0 ) ? strlen(s) : 0)
{
	cout << "Conversion (and default) constructor: " << s << endl;
	setString( s );
}

String::String( const String &copy )
	: length( copy.length )
{
	cout << "Copy constructor: " << copy.sPtr << endl;
	setString( copy.sPtr );
}

String::~String()
{
	cout << "Destructor: " << sPtr << endl;
	delete [] sPtr;
}

const String &String::operator=( const String &right )
{
	cout << "operator = called" << endl;

	if( &right != this )
	{
		delete [] sPtr;
		length = right.length;
		setString( right.sPtr );
	}
	else
		cout << "Attempted assignment of a String to itself" << endl;

	return *this;
}

const String &String::operator+=( const String &right )
{
	size_t newLength = length + right.length;
	char *tempPtr = new char[ newLength + 1 ];

	strcpy( tempPtr, sPtr );
	strcpy( tempPtr + length, right.sPtr );

	delete [] sPtr;
	sPtr = tempPtr;
	length = newLength;
	return *this;
}

bool String::operator!() const
{
	return length == 0;
}

bool String::operator==( const String &right ) const
{
	return strcmp( sPtr, right.sPtr ) == 0;
}

bool String::operator<( const String &right ) const
{
	return strcmp( sPtr, right.sPtr ) < 0;
}

char String::operator[]( int subscript ) const;
{
	if( subscript < 0 || subscript >= length )
	{
		cerr << "Error: Subscript " << subscript
			<< " out of the range." << endl;
		exit(1); 
	}

	return sPtr[ subscript ];
}

char &String::operator[]( int subscript ) 
{
	if( subscript < 0 || subscript >= length )
	{
		cerr << "Error: Subscript " << subscript
			<< " out of the range." << endl;
		exit(1);
	}

	return sPtr[ subscript ];
}

String String::operator()( int index, int subLength ) const
{
	if( index < 0 || index >= length || subLength < 0 )
	{
		return "";
	}

	int len;
	if( ( subLength == 0 ) )
	{
		len = length - index;
	}
	else
		len = subLength;

	char *tempPtr = new char[ len + 1 ];

	strncpy( tempPtr, &sPtr[ index ], len );
	tempPtr[ len ] = '\0';

	String tempString( tempPtr );
	delete [] tempPtr;
	return tempString;
}

int String::getLength() const
{
	return length;
}

void String::setString( const char *string2 )
{
	sPtr = new char[ length + 1 ];

	if( string2 != 0 )
	{
		strcpy( sPtr, string2 );
	}
	else
	{
		sPtr[ 0 ] = '\0';
	}
}

ostream &operator<<( ostream &output, const String &s )
{
	output << s.sPtr;
	return output;
}

istream &operator>>( istream &input, String &s )
{
	char temp[ 100 ];
	input  >> setw( 100 ) >> temp;
	s = temp;
	return input;
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

