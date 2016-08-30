// Fig. 10.22: Employee.cpp
// Member-function definitions for class Employee.
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strcpy;

#include "Employee.h"

int Employee::count = 0;

int Employee::getCount()
{
	return count;
}

//

Employee::Employee( const char * const first, const char * const last )
{
	firstName = new char[ strlen( first ) + 1 ];
	strcpy( firstName, first );

	lastName = new char[ strlen( last ) + 1 ];
	strcpy( lastName, last );

	count++;

	cout << "Employee constructor for " << firstName
		<< ' ' << lastName << " called." << endl;
}

Employee::~Employee()
{
	cout << "~Employee() called for " << firstName
		<< ' ' << lastName << endl;

	delete [] firstName;
	delete [] lastName;
	count --;
}

const char *Employee::getFirstName() const
{
	return firstName;
}

const char *Employee::getLastName() const
{
	return lastName;
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
