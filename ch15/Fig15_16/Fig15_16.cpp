// Fig. 15.16: Fig15_16.cpp 
// Using member-function fill and stream-manipulator setfill to change
// the padding character for fields larger than the printed value.
#include <iostream>
using std::cout;
using std::dec;
using std::endl;
using std::hex;
using std::internal;
using std::left;
using std::right;
using std::showbase;


#include <iomanip>
using std::setfill;
using std::setw;

int main()
{
	int x = 10000;

	cout << x << " printed as int right and left justified\n"
		<< "and as hex with internal justification.\n"
		<< "Using the defalut pad character (space):" << endl;

	cout << showbase << setw( 10 ) << x << endl;

	cout << left << setw( 10 ) << x << endl;

	cout << internal << setw( 10 ) << hex << x << endl << endl;

	cout << "Using various padding characters:" << endl;

	cout.fill( '*' );
	cout << setw( 10 ) << dec << x << endl;

	cout << left << setw( 10 ) << setfill( '#' ) << x << endl;

	cout << internal << setw( 10 ) << setfill( '^' ) << hex << x << endl;

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
