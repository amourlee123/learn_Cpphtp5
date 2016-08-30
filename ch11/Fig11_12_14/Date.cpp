// Fig. 11.13: Date.cpp
// Date class member-function definitions.
#include <iostream>
#include "Date.h"

const int Date::days[] = 
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Date::Date( int m, int d, int y )
{
	setDate( m, d, y );
}

void Date::setDate( int mm, int dd, int yy )
{
	month = ( mm >= 1 && mm <= 12 ) ? mm : 1;
	year = ( yy >= 1900 && yy <= 2100 ) ? yy : 1900;

	if( month == 2 && leapYear( year ) )
		day = ( dd >= 1 && dd <= 29 ) ? dd : 1;
	else
		day = ( dd >= 1 && dd <= days[ month ] ) ? dd : 1;
}

Date &Date::operator++()
{
	helpIncrement();

	return *this;
}

Date Date::operator++( int )
{
	Date temp = *this;
	helpIncrement();

	return temp;
}

const Date &Date::operator+=( int additionalDays )
{
	for( int i = 0; i < additionalDays; i++ )
	{
		helpIncrement();
	}

	return *this;
}

bool Date::leapYear( int testYear ) const
{
	if( testYear % 400 == 0 ||
	  (	testYear % 100 != 0 && testYear % 4 == 0 ) )
		return true;
	else
		return false;
}

bool Date::endOfMonth( int testDay ) const
{
	if( month == 2 && leapYear( year ) )
		return testDay == 29;
	else
		return testDay == days[ month ];
}

void Date::helpIncrement()
{
	if( !endOfMonth ( day ) )
	{
		day++;
	}
	else
		if( month < 12 )
		{
			month++;
			day = 1;
		}
		else
		{
			year++;
			month = 1;
			day = 1;
		}
}


ostream &operator<<( ostream &output, const Date &d )
{
	static char const *monthName[ 13 ] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	output << monthName[ d.month ] << ' ' << d.day << ", " << d.year;
	
	return output;
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
