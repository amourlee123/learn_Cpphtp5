// Fig. 11.9: String.h
// String class definition.
#ifndef STRING_H
#define STRING_H

class String
{
	friend ostream &operator<<( ostream &, const String & );
	friend istream &operator>>( istream &, const String & );
public:
	String( const char * = "" );
	String( const String & );
	~String();

	const String &operator=( const String & );
	const String &operator+=( const String & );


	bool operator!() const;
	bool operator==( const String & ) const;
	bool operator<( const String & ) const;

	bool operator!=( const String &right ) const
	{
		return !( *this == right );
	}

	bool operator>( const String & ) const
	{
		return  *this > right ;
	}

	bool operator<=( const String &right ) const
	{
		return !( *this > right );
	}

	bool operator>=( const String &right ) const
	{
		return !( *this < right );
	}


	char &operator[]( int );
	char operator[]( int ) const;
	String operator()( int, int = 0 ) const;
	int getLength() const;
private:
	int length;
	char *sPtr;
	
	void setString( const char * );
}

#endif


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
