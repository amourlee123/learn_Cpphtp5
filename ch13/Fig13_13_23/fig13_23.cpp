// Fig. 13.23: fig13_23.cpp
// Processing Employee derived-class objects individually 
// and polymorphically using dynamic binding.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

void virtualViaPointer( const Employee * const );
void virtualViaReference( const Employee & );

int main()
{
	cout << fixed << setprecision( 2 );

	SalariedEmployee salariedEmployee(
		"John", "Smith", "111-11-1111", 800 );
	HourlyEmployee hourlyEmployee(
		"Karen", "Price", "222-22-2222", 16.75, 40 );
	CommissionEmployee commissionEmployee(
		"Sue", "Jones", "333-33-3333", 10000, 0.06 );
	BasePlusCommissionEmployee basePlusCommissionEmployee(
		"Bob", "Lewis", "444-44-4444", 5000, 0.04, 300 );


	cout << "Employees processed individually using static binding:\n\n";

	salariedEmployee.print();
	cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
	hourlyEmployee.print();
	cout << "\nearned $" << hourlyEmployee.earnings() << "\n\n";
	commissionEmployee.print();
	cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
	basePlusCommissionEmployee.print();
	cout << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";


	vector < Employee * > employees( 4 );

	employees[ 0 ] = &salariedEmployee;
	employees[ 1 ] = &hourlyEmployee;
	employees[ 2 ] = &commissionEmployee;
	employees[ 3 ] = &basePlusCommissionEmployee;

	cout << "#########################################";
	cout << "Employees processed polymorphically via dynamic binding:\n\n";

	cout << "Virtual function calls made off base-class pointers:\n\n";

	for ( size_t i = 0; i < employees.size(); i++ )
	{
		virtualViaPointer( employees[ i ] );
	} 

	cout << "Virtual function calls made off base-class references:\n\n";

	for ( size_t i = 0; i < employees.size(); i++ )
	{
		virtualViaReference( *employees[ i ] );
	}
	
	return 0;
}

void virtualViaPointer( const Employee * const baseClassPtr )
{
	baseClassPtr->print();
	cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference( const Employee &baseClassRef )
{
	baseClassRef.print();
	cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
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
