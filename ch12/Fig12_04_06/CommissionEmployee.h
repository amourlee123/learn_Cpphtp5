// Fig. 12.4: CommissionEmployee.h
// CommissionEmployee class definition represents a commission employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
using std::string;

class CommissionEmployee
{
public:
	CommissionEmployee( const string &, const string &, const string &,
		double = 0.0, double = 0.0 );

	void setFirstName( const string & );
	string getFirstName() const;

	void setLastName( const string & );
	string getLastName() const;

	void setSocialSecurityNumber( const string & );
	string getSocialSecurityNumber() const;

	void setGrossSales( double);
	double getGrossSales() const;
	
	void setCommissionRate( double );
	double getCommissionRate() const;

	double earnings() const;
	void print() const;
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
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
