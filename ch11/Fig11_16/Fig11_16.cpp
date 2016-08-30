// Fig. 11.16: Fig11_16.cpp
// Driver for simple class Array.
#include <iostream>
using std::cout;
using std::endl;

#include "Array.h"

void outputArray( const Array &);

int main()
{
	Array integers1( 7 );
	outputArray( integers1 );
	outputArray( 3 );
	return 0;
}

void outputArray( const Array &arrayToOutput )
{
	cout << "The Array received has " << arrayToOutput.getSize()
		<< " elements. The contents are:\n" << arrayToOutput << endl;
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
