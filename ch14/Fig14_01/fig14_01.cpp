// Fig 14.1: fig14_01.cpp
// Using template functions.
#include <iostream>
using std::cout;
using std::endl;

template< typename T >
void printArray( const T *array, int count )
{
	for( int i = 0; i < count; i++ )
	{
		cout << array[ i ] << " ";
	}
	cout << endl;
}

int main()
{
	const int ACOUNT = 5;
	const int BCOUNT = 7;
	const int CCOUNT = 6;

	int a[ ACOUNT ] = { 1, 2, 3, 4, 5 };
	double b[ BCOUNT ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	char c[ CCOUNT ] = "HELLO";

	cout << "Array a contains:" << endl;
	printArray( a, ACOUNT );

	cout << "Array b contains:" << endl;
	printArray( b, BCOUNT );

	cout << "Array c contains:" << endl;
	printArray( c, CCOUNT );

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
