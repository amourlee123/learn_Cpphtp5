// Fig. 15.21: Fig15_21.cpp 
// Demonstrating the flags member function.
#include <iostream>
using std::cout;
using std::endl;
using std::ios_base;
using std::oct;
using std::scientific;
using std::showbase;

int main()
{
	int integerValue = 1000;
	double doubleValue = 0.06726762;

	cout << "The value of the flags variable is: " << cout.flags()
		<< "\nPrint int and double in original format:\n"
		<< integerValue << '\t' << doubleValue << endl << endl;

	ios_base::fmtflags originalFormat = cout.flags();
	cout << showbase << oct << scientific;

	cout << "The value of the flags variable is: " << cout.flags()
		<< "\nPrint int and double in a new format:\n"
		<< integerValue << '\t' << doubleValue << endl << endl;

	cout.flags( originalFormat );

	cout << "The restored value of the flags variable is: "
		<< cout.flags() << "\nPrint values in original format again:\n"
		<< integerValue << "\t" << doubleValue << endl;

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
