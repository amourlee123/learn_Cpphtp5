// Fig. 13.17: HourlyEmployee.h
// HourlyEmployee class definition.
#ifndef HOURLY_H
#define HOURLY_H

#include "Employee.h"

class HourlyEmployee : public Employee
{
public:
	HourlyEmployee( const string &, const string &, const string &,
		double = 0.0, double = 0.0 );

	void setWage( double );
	double getWage() const;

	void setHours( double );
	double getHours() const;

	virtual double earnings() const;
	virtual void print() const;
private:
	double wage;
	double hours;
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
