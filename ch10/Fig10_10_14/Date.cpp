// Fig. 10.11: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"


Date::Date( int mn, int dy, int yr )
{
	if( mn >= 0 && mn <= 12 )
		month = mn;
	else
	{
		month = 1;
		cout << "Ivalid month (" << mn << ") set to 1.\n";
	}

	year = yr;
	day = checkDay( dy );

	cout << "Date object constructor for date ";
	print();
	cout << endl;
}

void Date::print() const
{
	cout << month << "/" << day << "/" << year;
}

Date::~Date()
{
	cout << "Date object destructor for date ";
	print();
	cout << endl;
}

int Date::checkDay( int testDay ) const
{
	static const int daysPerMonth[ 13 ] =
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };

	if( testDay >= 0 && testDay <= daysPerMonth[ month ])
	{
		return testDay;
	}

	if( month == 2 && day == 29 && ( year % 400 == 0 || ( year % 100 != 0 && year % 4 == 0 ) ) )
	{
		return testDay;
	}

	cout << "Invalid day (" << testDay << ") set to 1.\n";
	return 1;
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
