// Fig. 6.19: fig06_19.cpp
// Comparing pass-by-value and pass-by-reference with references.
#include <iostream>
using std::cout;
using std::endl;

int squareByValue( int );
void squareByReference( int & );

int main()
{
	int x = 2;
	int z = 4;

	cout << "x = " << x << " before suqareByValue\n";
	cout << "Value returned by squareByValue: "
		<< squareByValue( x ) << endl;
	cout << "x = " << x << " after squareByValue\n" << endl;

	cout << "z = " << z << " before squareByReference" << endl;
	squareByReference( z );
	cout << "z = " << z << " after squareByReference" << endl;

	return 0;
}

int squareByValue( int number )
{
	return number *= number;
}

void squareByReference( int &numberRef )
{
	numberRef *= numberRef;
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
