// Fig. 8.15: fig08_15.cpp
// This program puts values into an array, sorts the values into
// ascending order and prints the resulting array.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void selectionSort( int * const, const int );
void swap( int * const, int * const);

int main()
{
	const int arraySize = 10;
	int a[ arraySize ] = { 44, 4, 56, 8, 20, 12, 89, 68, 54, 37 };

	cout << "Data items in origining order\n";
	for	( int i = 0; i < arraySize; i++ )
	{
		cout << setw( 4 ) << a[ i ];
	}

	selectionSort( a, arraySize );

	cout << "\nData items in ascending order\n";
	for ( int j = 0; j < arraySize; j++ )
	{
		cout << setw( 4 ) << a[ j ];
	}

	cout << endl;

	return 0;
}

void selectionSort( int * const array, const int size )
{
	int smallest;

	for ( int x = 0; x < size - 1; x++ )
	{
		smallest = x;
		for ( int index = x + 1; index < size; index++ )
		{
			if ( array[ index ] < array[ smallest ])
				smallest = index;
		}

		swap( &array[ x ], &array[ smallest ]);
	}
}

void swap( int * const element1, int * const element2 )
{
	int exchange = *element1;
	*element1 = *element2;
	*element2 = exchange;
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

