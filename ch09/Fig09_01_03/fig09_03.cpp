// Fig. 9.3: fig09_03.cpp
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp.
#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main()
{
	Time t;
	
	cout << "The initial universal time is ";
	t.printUniversal();
	cout << "\nThe initial standard time is ";
	t.printStandard();

	t.setTime( 13, 27, 6 );

	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal();
	cout << "\nStandard time after setTime is ";
	t.printStandard();

	t.setTime( 99, 99, 99 );
	cout << "\n\nAfter attemping invalid settings:"
		<< "\nUniversal time: ";
	t.printUniversal();
	cout << "\nStandard time: ";
	t.printStandard();

	cout << endl;
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
