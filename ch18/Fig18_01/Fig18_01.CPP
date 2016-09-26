// Fig. 18.1: Fig18_01.cpp
// Demonstrating string assignment and concatenation.
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
	string string1( "cat" );
	string string2;
	string string3;

	string2 = string1;
	string3.assign( string1 );

	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3  << "\n\n";

	string2[ 0 ] = string3[ 2 ] = 'r';

	cout << "After modification of string2 and string3:\n" << "string1: "
		<< string1 << "\nstring2: " << string2 << "\nstring3: ";


	for ( int i = 0; i < string3.length(); i++ )
	{
		cout << string3.at( i );
	}

	string string4( string1 + "apult" );
	string string5;

	string3 += "pet";
	string1.append( "acomb" );

	string5.append( string1, 4, string1.length() - 4 );

	cout << "\n\nAfter concatenation:\nstring1: " << string1
		<< "\nstring2: " << string2
		<< "\nstring3: " << string3
		<< "\nstring4: " << string4
		<< "\nstring5: " << string5 << endl;

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
