// Fig. 6.9: fig06_09.cpp
// Roll a six-sided die 6,000,000 times.
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

int main()
{
	unsigned seed;
		
	cout << "Enter seed: ";
	cin >> seed;

	srand( seed );

	for ( int counter = 1; counter <= 20 ; counter++ )
	{
		cout << setw( 10 ) << ( 1 + rand() % 6 );

		if ( counter % 5 == 0 )
		{
			cout << endl;
		}
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
