// Fig. 7.20: fig07_20.cpp
// This program sorts an array's values into ascending order.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void orderArray( int [], int );

int main()
{
	const int arraySize = 10;
	int a[ arraySize ] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };

	cout << "Unsorted array:\n";
	for ( int i = 0; i < arraySize; i++ )
	{
		cout << setw(4) << a[ i ]; 
	}

	orderArray( a, arraySize );

	cout << "\n\nSorted array:\n";
	for ( int j = 0; j < arraySize; j++ )
	{
		cout << setw(4) << a[ j ];
	}

	cout << endl;
	return 0;
}

void orderArray( int array[], int sizeOfArray )
{
	int insert;	

	for ( int a = 1; a < sizeOfArray; a++ )
	{
		insert = array[ a ];

		for ( int b = a - 1; b >= 0 ; b-- )
		{
			if ( array[ b ] > insert )
			{
				array[ b + 1 ] = array[ b ];
				array[ b ] = insert;
			}
			else 
			{
				break;
			}
		}
	}
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
