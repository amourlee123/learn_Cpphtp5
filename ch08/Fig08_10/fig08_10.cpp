// Fig. 8.10: fig08_10.cpp
// Converting lowercase letters to uppercase letters
// using a non-constant pointer to non-constant data.
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::toupper;

void convertToUppercase( char * );

int main()
{
	char phrase[] = "characters and $32.98";

	cout << "The characters before conversion is: " << phrase << endl;

	convertToUppercase( phrase );

	cout << "The characters after conversion is: " << phrase << endl;

	return 0;
}

void convertToUppercase( char *sPtr )
{
	while ( *sPtr != '\0')
	{
		if ( islower( *sPtr ) )
			*sPtr = toupper( *sPtr );
			sPtr++;
	}
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
