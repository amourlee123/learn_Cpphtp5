// Fig. 11.12: Date.h
// Date class definition.
#ifndef DATE_H
#define DATE_H

#include <iostream>
using std::ostream;

class Date
{
	friend ostream &operator<<( ostream &, const Date & );
public:
	Date( int m = 1, int d = 1, int y = 1900 );
	void setDate( int, int, int );
	Date &operator++();
	Date operator++( int );
	const Date &operator+=( int );
	bool leapYear( int ) const;
	bool endOfMonth( int ) const;
private:
	int month;
	int day;
	int year;

	static const int days[];
	void helpIncrement();
};

#endif


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
