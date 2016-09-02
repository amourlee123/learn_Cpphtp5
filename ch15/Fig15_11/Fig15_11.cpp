// Fig. 15.11: Fig15_11.cpp
// Creating and testing user-defined, nonparameterized 
// stream manipulators.
#include <iostream>
using std::cout;
using std::flush;
using std::ostream;

ostream& bell( ostream& output )
{
	return output << '\a';
}

ostream& carriageReturn( ostream& output )
{
	return output << '\r';
}

ostream& tab( ostream& output )
{
	return output << '\t';
}

ostream& endLine( ostream& output )
{
	return output << '\n' << flush;
}

int main()
{
	cout << "Testing the tab manipulator:" << endLine
		<< 'a' << tab << 'b' << tab << 'c' << endLine;

	cout << "Testing the carriageReturn and bell manipulators:"
		<< endLine << ".............";

	cout << bell;

	cout << carriageReturn << "------" << endLine;

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
