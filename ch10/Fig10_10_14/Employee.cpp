// Fig. 10.13: Employee.cpp
// Member-function definitions for class Employee.
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strncpy;

#include "Employee.h"
#include "Date.h"

Employee::Employee( const char * const first, const char * const last,
			const Date &dateOfBirth, const Date &dateOfHire )
			: birthDate( dateOfBirth ),
			  hireDate( dateOfHire )
{
	int length = strlen( first );
	length = ( length < 25 ? length : 24 );
	strncpy( firstName, first , length );
	firstName[ length ] = '\0';

	length = strlen( last );
	length = ( length < 25 ? length : 24 );
	strncpy( lastName, last, length );
	lastName[ length ] = '\0';

	cout << "Employee object constructor: "
		<< firstName << ' ' << lastName << endl;
}

void Employee::print() const
{
	cout << lastName << ", " << firstName << "  Hired: ";
	hireDate.print();
	cout << "  BirthDay: ";
	birthDate.print();
	cout << endl;
}

Employee::~Employee()
{
	cout << "Employee object destructor: "
		<< lastName << ", " << firstName << endl;
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
