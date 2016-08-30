// Fig. 7.11: fig07_11.cpp
// Student poll program.
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
	const int responseSize = 40;
	const int frequencySize = 11;

	int responseResult[ responseSize ] = { 0 };
	int frequency[ frequencySize ] = { 0 };

	srand ( time( 0 ) );
	for ( int response = 0; response < responseSize; response++ )
	{
		responseResult[ response ] = 1 + rand() % 10;
        cout << setw( 5 ) << responseResult[ response ];
		if( (response + 1) % 5 == 0 )
		{
			cout << endl;
		}
		frequency[ responseResult [ response ] ]++;
	}

	cout << "Rating" << setw( 17 ) << "Frequency" << endl;

	for ( int i = 1; i < frequencySize; i++ )
	{
		cout << setw( 6 ) << i << setw( 17 ) << frequency[ i ] << endl;
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
