// Fig. 8.28: fig08_28.cpp
// Multipurpose sorting program using function pointers.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

void selectionSort( int [], const int, bool (*)( int, int ) );
void swap( int * const, int * const );
bool ascending( int, int );
bool descending( int, int );

int main()
{
	const int arraySize = 10;
	int order;
	int counter;
	int a[ arraySize ] = { 2, 43, 17, 5, 8, 89, 34, 21, 78, 45 };

	cout << "Enter 1 to sort in ascending order,\n"
		<< "Enter 2 to sort in descending order: ";
	cin >> order;
	cout << "\nData items in original order\n";

	for ( counter = 0; counter < arraySize; counter++ )
	{
		cout << setw( 4 ) << a[ counter ];
	}

	if ( order == 1 )
	{
		selectionSort( a, arraySize, ascending );
		cout << "\nData items in ascending order:\n";
	}
	else
	{
		selectionSort( a, arraySize, descending );
		cout << "\nData items in descending order:\n";
	}

	for ( counter = 0; counter < arraySize; counter++ )
	{
		cout << setw( 4 ) << a[ counter ];
	}

	cout << endl;

	return 0;
}

void selectionSort( int array[], const int size, bool (*compare)( int, int ) )
{
	int smallestOrLargest;

	for ( int x = 0; x < size - 1; x++ )
	{
		smallestOrLargest = x;
		for ( int index = x + 1; index < size; index++ )
		{
			if( !(*compare)( array[smallestOrLargest], array[index] ))
			{
				smallestOrLargest = index;
			}
		}
		
		swap( &array[smallestOrLargest], &array[x] );
	}
}

void swap( int * const elementPtr1, int * const elementPtr2 )
{
	int exchange = *elementPtr1;
	*elementPtr1 = *elementPtr2;
	*elementPtr2 = exchange;
}

bool ascending( int a, int b )
{
	return a < b;
}

bool descending( int a, int b )
{
	return a > b;
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
