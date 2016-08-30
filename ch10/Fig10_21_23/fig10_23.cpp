// Fig. 10.23: fig10_23.cpp
// Driver to test class Employee.
#include <iostream>
using std::cout;
using std::endl;

#include "Employee.h"

int main()
{
	cout << "Number of employees before instantiation of any objects is "
		<< Employee::getCount() << endl;

	Employee *e1Ptr = new Employee( "Susan", "Baker" );
	Employee *e2Ptr = new Employee( "Robert", "Jones" );

	cout << "Number of employee after objects are instantiated is "
		<< e1Ptr->getCount() << endl;

	cout << "\nEmployee 1: "
		<< e1Ptr->getFirstName() << ' ' << e1Ptr->getLastName()
		<< "\nEmployee 2: "
		<< e2Ptr->getFirstName() << ' ' << e2Ptr->getLastName() << endl;

	delete e1Ptr;
	e1Ptr = 0;
	delete e2Ptr;
	e2Ptr = 0;

	cout << "\nNumber of employees after objects are deleted is "
		<< Employee::getCount() << endl;

	return 0;

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
