// Fig. 13.5: fig13_05.cpp
// Aiming base-class and derived-class pointers at base-class
// and derived-class objects, respectively.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
	CommissionEmployee commissionEmployee(
		"Sue", "Jones", "222-22-2222", 10000, .06 );

	CommissionEmployee *commissionEmployeePtr = 0;

	BasePlusCommissionEmployee basePlusCommissionEmployee(
		"Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

	BasePlusCommissionEmployee *basePlusCommissionEmployee = 0;

	cout << fixed << setprecision( 2 );

	cout << "Print base-class and derived-class objects:\n\n";
	commissionEmployee.print();
	cout << "\n\n";
	basePlusCommissionEmployee.print();

	commissionEmployeePtr = &commissionEmployee;
	cout << "\n\nCalling print with base-class pointer to "
		<< "\nbase-class object invokes base-class print function:\n\n";
	commissionEmployeePtr->print();

	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with derived-class poniter to "
		<< "\nderived-class object invokes derived-class "
		<< "print function:\n\n";

	basePlusCommissionEmployeePtr->print();

	commissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with base-class pointer to "
		<< "derived-class object\ninvokes base-class print "
		<< "function on that derived-class object:\n\n";
	commissionEmployeePtr->print();
	cout << endl;

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
