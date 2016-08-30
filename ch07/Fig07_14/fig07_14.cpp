// Fig. 7.14: fig07_14.cpp
// Passing arrays and individual array elements to functions.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modifyArray( int [], int );
void modifyElement( int );

int main()
{
	const int arraySize = 5;
	int a[ arraySize ] = { 0, 1, 2, 3, 4 };

	cout << "Effects of passing entire array by reference:"
		<< "\n\nThe values of the original array are: \n";

	for ( int i = 0; i < arraySize; i++ )
	{
		cout << setw( 3 ) << a[ i ];
	}
	cout << endl;

	modifyArray( a, arraySize );
	cout << "The values of the modified array are: \n";

	for ( int j = 0; j < arraySize; j++ )
	{
		cout << setw( 3 ) << a[ j ];
	}

	cout << "\n\n\nEffects of passing array element by value:"
		<<"\n\na[ 3 ] before modifyElement: " << a[ 3 ] << endl;

	modifyElement( a[ 3 ] );

	cout << "a[ 3 ] after modifyElement: " << a[ 3 ] << endl;

	return 0;
}

void modifyArray( int b[], int sizeOfArray )
{
	for ( int k; k < sizeOfArray; k++ )
	{
		b[ k ] *= 2;
	}
}

void modifyElement( int element )
{
	cout << "Value of element in modifyElement: " << (element *= 2) << endl;
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
