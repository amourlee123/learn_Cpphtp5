// Fig. 15.5: Fig15_05.cpp 
// Contrasting input of a string via cin and cin.get.
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	const int SIZE = 80;
	char buffer1[ SIZE ];
	char buffer2[ SIZE ];

	cout << "Enter a sentence:" << endl;
	cin >> buffer1;

	cout << "\nThe string read with cin was:" << endl
		<< buffer1 << endl << endl;

	cin.get( buffer2, SIZE );

	cout << "The string read with cin.get was:" << endl
		<< buffer2 << endl;

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
