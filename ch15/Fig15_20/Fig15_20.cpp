// Fig. 15.20: Fig15_20.cpp
// Demonstrating stream-manipulators boolalpha and noboolalpha.
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;
using std::noboolalpha;

int main()
{
	bool booleanValue = true;

	cout << "booleanValue is " << booleanValue << endl;

	cout << "booleanValue (after using boolalpha) is "
		<< boolalpha << booleanValue << endl << endl;

	cout << "switch booleanValue and use noboolalpha" << endl;
	booleanValue = false;

	cout << endl;

	cout << "booleanValue is " << noboolalpha << booleanValue << endl;

	cout << "booleanValue (after using boolalpha) is "
		<< boolalpha << booleanValue << endl;

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
