// Fig. 8.16: fig08_16.cpp
// Sizeof operator when used on an array name
// returns the number of bytes in the array.
#include <iostream>
using std::cout;
using std::endl;

size_t getSize( double * );

int main()
{
	double array[ 20 ];

	cout << "The number of bytes in the array is " << sizeof ( array );

	cout << "\nThe number of bytes retured by getSize is " << getSize( array ) << endl;

	return 0;
}

size_t getSize( double *ptr )
{
	cout << ptr << endl;

	return sizeof( ptr );
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
