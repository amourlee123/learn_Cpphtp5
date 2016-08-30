// Fig. 13.18: HourlyEmployee.cpp
// HourlyEmployee class member-function definitions.
#include <iostream>
using std::cout;

#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee( const string &first, const string &last, 
	const string &ssn, double hourlyWage, double hoursWorked )
	: Employee( first, last, ssn )
{
	setWage( hourlyWage );
	setHours( hoursWorked );	
}

void HourlyEmployee::setWage( double hourlyWage )
{
	wage = ( hourlyWage < 0.0 ) ? 0.0 : hourlyWage;
}
double HourlyEmployee::getWage() const
{
	return wage;
}

void HourlyEmployee::setHours( double hoursWorked )
{
	hours = ( (hoursWorked >= 0.0) && (hoursWorked <= 168) ) ? hoursWorked : 0.0;
}

double HourlyEmployee::getHours() const
{
	return hours;
}

double HourlyEmployee::earnings() const
{
	if ( getHours() <= 40 )
		return getWage() * getHours();
	else
		return 40 * getWage() + ( (getHours() - 40) * getWage() * 1.5 );
}

void HourlyEmployee::print() const
{
	cout << "hourly employee: ";
	Employee::print();
	cout << "\nhourly wage: " << getWage()
		<< "; hours worked: " << getHours();
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
