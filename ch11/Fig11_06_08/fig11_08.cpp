// Fig. 11.8: fig11_08.cpp
// Array class test program.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Array.h"

int main()
{
	Array integers1( 7 );
	Array integers2;

	cout << "Size of Array integers1 is "
		<< integers1.getSize()
		<< "\nArray after initialization:\n" << integers1;

	cout << "\nSize of Array integers2 is "
		<< integers2.getSize()
		<< "\nArray after initialization:\n" << integers2;

	cout << "\nEnter 17 integers:" << endl;
	cin >> integers1 >> integers2;
	
	cout << "\nAfter input, the Arrays contain:\n"
		<< "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	cout << "\nEvaluating: integers1 != integers2" << endl;

	if( integers1 != integers2 )
	{
		cout << "integers1 and integers2 are not equal" << endl;
	}

	Array integers3( integers1 );

	cout << "\nSize of Array integers3 is "
		<< integers3.getSize()
		<< "\nArray after initialization:\n"
		<< integers3;

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;
	cout << "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	cout << "\nEvaluating: integers1 == integers2" << endl;

	if( integers1 == integers2 )
		cout << "integers1 and integers are equal" << endl;

	cout << "\nintegers1[5] is " << integers1[ 5 ];

	cout << "\n\nAssigning 1000 to integers1[ 5 ]" << endl;
	integers1[ 5 ] = 1000;
	cout << "integers1:\n" << integers1;

	cout << "\nAssigning 1000 to integers1[ 15 ]" << endl;
	integers1[ 15 ] = 1000;
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
