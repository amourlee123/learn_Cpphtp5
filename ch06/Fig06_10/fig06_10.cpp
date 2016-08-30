#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;


int main()
{
	int frequency1 = 0;
	int frequency2 = 0;
	int frequency3 = 0;
	int frequency4 = 0;
	int frequency5 = 0;
	int frequency6 = 0;

	int face;

	for ( int counter = 1; counter <= 6000000; counter++ )
	{
		face = 1 + rand() % 6;

		switch ( face )
		{
			case 1:
				++frequency1;
				break;

			case 2:
				++frequency2;
				break;

			case 3:
				++frequency3;
				break;

			case 4:
				++frequency4;
				break;

			case 5:
				++frequency5;
				break;

			case 6:
				++frequency6;
				break;

			default:
				cout << "Program should never get here!";
		}
	}

	cout << "Face" << setw(13) << "Frequency" << endl;
	cout << "  1 " << setw(13) << frequency1 << endl;
	cout << "  2 " << setw(13) << frequency2 << endl;
	cout << "  3 " << setw(13) << frequency3 << endl;
	cout << "  4 " << setw(13) << frequency4 << endl;
	cout << "  5 " << setw(13) << frequency5 << endl;
	cout << "  6 " << setw(13) << frequency6 << endl;

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
