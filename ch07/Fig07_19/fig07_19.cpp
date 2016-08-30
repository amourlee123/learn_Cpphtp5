// Fig. 7.19: fig07_19.cpp
// Linear search of an array.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int linearSearch( const int [], int, int );

int main()
{
	const int arraySize = 100;
	int a[ arraySize ];
	int searchKey;

	for ( int i = 0; i < arraySize; i++ )
	{
		a[ i ] = 2 * i;
	}

	cout << "Enter integer search key: ";
	cin >> searchKey;

	int element = linearSearch( a, searchKey, arraySize );

	if ( element != -1 )
	{
		cout << "Found value in element " << element << endl;
	}
	else
	{
		cout << "Value not found" << endl;
	}
	return 0;
}

int linearSearch( const int array[], int key, int sizeOfArray )
{
	for ( int j = 0; j < sizeOfArray; j++ )
	{
		if ( array[ j ] == key )
		{
			return j;
		}
	}

	return -1;
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
