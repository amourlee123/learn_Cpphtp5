// Fig 11.7: Array.cpp
// Member-function definitions for class Array
#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::exit;

#include "Array.h"

Array::Array( int arraySize )
{
	size = ( arraySize > 0 ? arraySize : 10 );
	
	ptr = new int[ size ];

	for ( int i = 0; i < size; i++ )
	{
		ptr[ i ] = 0;
	}
}

Array::Array( const Array &arrayToCopy )
	: size( arrayToCopy.size )
{
	ptr = new int[ size ];
	for ( int i = 0; i < size; i++ )
	{
		ptr[ i ] = arrayToCopy.ptr[ i ];
	}
}

Array::~Array()
{
	delete [] ptr;
}

int Array::getSize() const
{
	return size;
}

const Array &Array::operator=( const Array &right )
{
	if( &right != this )
	{
		if( size != right.size )
		{
			delete [] ptr;
			size = right.size;
			ptr = new int[ size ];
		}
		
		for ( int i = 0 ; i < size; i++ )
		{
			ptr[ i ] = right.ptr[ i ];
		}
	}

	return *this;
}


bool Array::operator==( const Array &right ) const
{
	if( size != right.size )
	{
		return false;
	}
	for ( int i = 0; i < size; i++ )
	{
		if( ptr[ i ] != right.ptr[ i ] )
		{
			return false;
		}
	}

	return true;
}

int &Array::operator[]( int subscript )
{
	if( subscript < 0 || subscript >= size )
	{
		cerr << "\nError: Subscript " << subscript
			<< " out of the range" << endl;

		exit(1);
	}

	return ptr[subscript];
}

int Array::operator[]( int subscript ) const
{
	if( subscript < 0 || subscript >= size )
   	{
     	cerr << "\nError: Subscript " << subscript
      		<< " out of the range" << endl;
      
      	exit(1);
   	}

	return ptr[subscript];
}

istream &operator>>( istream &input, Array &a )
{
	for ( int i = 0; i < a.size; i++ )
	{
		input >> a.ptr[ i ];
	}
	
	return input;
}

ostream &operator<<( ostream &output, const Array &a )
{
	int i;
		
	for ( i = 0; i < a.size; i++ )
	{
		output << setw( 12 ) << a.ptr[i];
		
		if( ( i + 1 ) % 4 == 0 )
		{
			output << endl;
		}
	}

	if (i % 4 != 0 )
	{
		output << endl;
	}

	return output;
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
