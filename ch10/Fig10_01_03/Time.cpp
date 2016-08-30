// Fig. 10.2: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h"

Time::Time( int hour, int minute, int second )
{
	setTime( hour, minute, second );
}
void Time::setHour( int hour, int minute, int second )
{
	setHour( hour );
	setMinute( minute );
	setSecond( second );
}

void Time::setHour( int h )
{
	hour = ( h >= 0 && h < 24 ) ? h : 0;
}

void Time::setMinute( int m )
{
	minute = ( m >= 0 && m < 60 ) ? m : 0;
}

void Time::setSecond( int s )
{
	second = ( s >= 0 && s < 60 ) ? m : 0;
}

int Time::getHour() const
{
	return hour;
}

int Time::getMinute() const
{
	return minute;
}

int Time::getSecond() const
{
	return second;
}

void Time::printUniversal() const
{
	cout << setfill( '0' ) << setw( 2 ) << hour << ":"
		<< setw( 2 ) << minute << ":"
		<< setw( 2 ) << second << endl;
}

void Time::printStandard()
{
	cout << (( hour ==0 || hour == 12 ) ? 12 : hour % 12 )<< ":" 
		<< setfill( '0' ) << setw( 2 ) << minute << ":"
		<< setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
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
