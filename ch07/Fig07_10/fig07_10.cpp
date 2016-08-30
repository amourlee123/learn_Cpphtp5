// Fig. 7.10: fig07_10.cpp
// Roll a six-sided die 6,000,000 times.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
	const int arraySize = 7;
	int frequency[arraySize] = { 0 };

	srand( time( 0 ) );

	for ( int roll = 1; roll <= 6000000; roll++ )
	{
		frequency[ 1 + rand() % 6 ]++;
	}

	cout << "Face" << setw( 13 ) << "Frequency" << endl;

	for ( int face = 1; face < arraySize; face++ )
	{
		cout << setw( 4 ) << face << setw( 13 ) << frequency[ face ] << endl;
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
