// Fig. 7.9: fig07_09.cpp
// Bar chart printing program.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
	const int arraySize = 11;
	int n[ arraySize ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

	cout << "Grade distribution:" << endl;

	for ( int counter = 0; counter < arraySize; counter++ )
	{
		if ( counter == 0)
		{
			cout << setw( 7 ) << "0-9: ";
		}
		else if ( counter == 10 )
		{
			cout << setw( 7 ) << "100: ";		
		}
		else
		{
			cout << counter * 10 << "-" << counter * 10 + 9 << ": ";
		}

		for ( int i = 0; i < n[counter]; i++ )
		{
			cout << "*";
		}
		
		cout << endl;
	}

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
