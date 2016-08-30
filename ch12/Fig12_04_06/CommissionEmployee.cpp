// Fig. 12.5: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.
#include <iostream>
using std::cout;

#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(
	const string &first, const string &last, const string &ssn, 
	double sales, double rate )
{
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales( sales );
	setCommissionRate( rate );
}

void CommissionEmployee::setFirstName( const string &first )
{
	firstName = first;
}

string CommissionEmployee::getFirstName() const
{
	return firstName;
}

void CommissionEmployee::setLastName( const string &last )
{
	lastName = last;
}

string CommissionEmployee::getLastName() const
{
	return lastName;
}

void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
	socialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales( double sales )
{
	grossSales = ( sales < 0.0 ) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

void CommissionEmployee::setCommissionRate( double rate )
{
	commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

double CommissionEmployee::earnings() const
{
	return commissionRate * grossSales;
}

void CommissionEmployee::print() const
{
	cout << "commission employee: " << firstName << ' ' << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
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
