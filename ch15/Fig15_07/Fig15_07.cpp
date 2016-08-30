// Fig. 15.7: Fig15_07.cpp 
// Unformatted I/O using read, gcount and write.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	const int SIZE = 80;
	char buffer[ SIZE ];

	cout << "Enter a sentence:" << endl;
	cin.read( buffer, 20 );

	cout << endl << "The sentence entered was:" << endl;
	cout.write( buffer, cin.gcount() );

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
