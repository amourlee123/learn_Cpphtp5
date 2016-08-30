// Fig. 13.13: Employee.h
// Employee abstract base class.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

class Employee
{
public:
	Employee( const string &, const string &, const string & );
	
	void setFirstName( const string & );
	string getFirstName() const;
	
	void setLastName( const string & );
	string getLastName() const;

	void setSocialSecurityNumber( const string & );
	string getSocialSecurityNumber() const;

	virtual double earnings() const = 0;
	virtual void print() const;
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
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
