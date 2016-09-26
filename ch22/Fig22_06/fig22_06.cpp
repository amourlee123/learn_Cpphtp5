// Fig. 22.6: fig22_06.cpp
// Printing an unsigned integer in bits.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

void displayBits( unsigned );

int main()
{
	unsigned inputValue;

	cout << "Enter an unsigned integer: ";
	cin >> inputValue;
	displayBits( inputValue );
	
	return 0;
}

void displayBits( unsigned value )
{
	const int SHIFT = 8 * sizeof( unsigned ) - 1;
	const unsigned MASK = 1 << SHIFT;

	cout << setw( 10 ) << value << " = ";

	for( int i = 1; i <= SHIFT + 1; i++ )
	{
		cout << ( value & MASK  ? '1' : '0' );
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
