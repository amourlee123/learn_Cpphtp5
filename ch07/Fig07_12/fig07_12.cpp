// Fig. 7.12: fig07_12.cpp
// Treating character arrays as strings.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	char string1[ 20 ];
	char string2[] = "string literal";

	cout << "Enter the string \"hello there\": ";
	cin >> string1;

	cout << "string1 is: " << string1 << "\nstring2 is: " << string2 << endl;

	cout << "string1 with spaces between characters is:\n";

	for (int i = 0; string1[ i ] != '\0'; i++ )
	{
		cout << string1[ i ] << ' ';
	}

	cin >> string1;
	cout << "\nstring1 is: " << string1 << endl;

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
