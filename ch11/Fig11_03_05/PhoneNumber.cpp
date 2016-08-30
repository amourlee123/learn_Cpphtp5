// Fig. 11.4: PhoneNumber.cpp
// Overloaded stream insertion and stream extraction operators
// for class PhoneNumber.
#include <iomanip>
using std::setw;

#include "PhoneNumber.h"

ostream &operator<<( ostream &output, const PhoneNumber &number )
{
	output << "(" << number.areaCode << ") "
		<< number.exchange << "-" << number.line;
	return output;
}

istream &operator>>( istream &input, PhoneNumber &number )
{
	input.ignore();
	input >> setw( 3 ) >> number.areaCode;
	input.ignore( 2 );
	input >> setw( 3 ) >> number.exchange;
	input.ignore();
	input >> setw( 4 ) >> number.line;
	return input;
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
