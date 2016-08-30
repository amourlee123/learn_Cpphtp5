// Fig. 9.2: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
using std::setfill;

#include "Time.h"

Time::Time()
{
	hour = minute = second = 0;
}

void Time::setTime( int h, int m, int s )
{
	hour = ( h >= 0 && h < 24 ) ? h : 0;
	minute = ( m >= 0 && m < 60 ) ? h : 0;
	second = ( s >= 0 && s < 60 ) ? s : 0;
}

void Time::printUniversal()
{
	cout << setfill( '0' ) << setw( 2 ) << hour << ":"
		<< setw( 2 ) << minute << ":" << setw( 2 ) << second;
}

void Time::printStandard()
{
	cout << (( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":" 
		<< setfill( '0' ) << setw( 2 ) << minute << ":"
		<< setw( 2 ) << second << ( hour < 12 ? " AM" : " PM");
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
