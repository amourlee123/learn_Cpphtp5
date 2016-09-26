// Fig. 22.8: fig22_08.cpp
// Using the bitwise AND, bitwise inclusive OR, bitwise
// exclusive OR and bitwise complement operators.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void displayBits( unsigned );

int main()
{
	unsigned number1;
	unsigned number2;
	unsigned mask;
	unsigned setBits;

	number1 = 2179876355;
	mask = 1;
	cout << "\nThe result of combine the following\n";
	displayBits( number1 );
	displayBits( mask );
	cout << "using the bitwise AND operator & is\n";
	displayBits( mask & number1 );

	number1 = 15;
	setBits = 241;
	cout << "\nThe result of combine the following\n";
	displayBits( number1 );
	displayBits( setBits );
	cout << "using the bitwise inclusive OR operator | is\n";
	displayBits( number1 | setBits );

	number1 = 139;
	number2 = 199;
	cout << "\nThe result of combine the following\n";
	displayBits( number1 );
	displayBits( number2 );
	cout << "using the bitwise exclusive OR operator ^ is\n";
	displayBits( number1 ^ number2 );

	number1 = 21845;
	cout << "\nThe one's complement of\n";
	displayBits( number1 );
	cout << "is" << endl;
	displayBits( ~number1 );
	return 0;
}

void displayBits( unsigned value )
{
	const int SHIFT = 8 * sizeof( unsigned ) - 1;
	const unsigned MASK = 1 << SHIFT;

	cout << setw( 10 ) << value << " = ";

	for( int i = 1; i <= SHIFT + 1; i++ )
	{
		cout << ( MASK & value ? '1' : '0' );
		value <<= 1;

		if( i % 8 == 0 )
			cout << ' ';
	}

	cout << endl;
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
