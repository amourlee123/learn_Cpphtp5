// Fig. 15.8: Fig15_08.cpp 
// Using stream manipulators hex, oct, dec and setbase.
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::dec;
using std::hex;
using std::oct;

#include <iomanip>
using std::setbase;

int main()
{
	int number;
	
	cout << "Enter a decimal number: ";
	cin >> number;

	cout << number << " in hexadecimal is: " 
		<< hex << number << endl;

	cout << dec << number << " in octal is: "
		<< oct << number << endl;

	cout << setbase(10) << number << " in decimal is: "
		<< number << endl;

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
