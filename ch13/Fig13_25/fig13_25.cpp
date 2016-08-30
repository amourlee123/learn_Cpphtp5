// Fig. 13.25: fig13_25.cpp
// Demonstrating downcasting and run-time type information.
// NOTE: For this example to run in Visual C++ .NET, 
// you need to enable RTTI (Run-Time Type Info) for the project.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include <typeinfo>

#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
	cout << fixed << setprecision( 2 );

	vector < Employee * > employees( 4 );

	employees[ 0 ] = new SalariedEmployee(
		"John", "Smith", "111-11-1111", 800 );
	employees[ 1 ] = new HourlyEmployee(
		"Karen", "Price", "222-22-2222", 16.75, 40 );
	employees[ 2 ] = new CommissionEmployee(
		"Sue", "Jones", "333-33-3333", 10000, .06 );
	employees[ 3 ] = new BasePlusCommissionEmployee(
		"Bob", "Lewis", "444-44-4444", 5000, .04, 300 );


	for ( size_t i = 0; i < employees.size(); i++ )
	{
		employees[ i ]->print();
		cout << endl;

		BasePlusCommissionEmployee *derivedPtr = 
			dynamic_cast < BasePlusCommissionEmployee * >
				(employees[ i ]);

		if( derivedPtr != 0 )
		{
			double oldBaseSalary = derivedPtr->getBaseSalary();
			cout << "old base salary: $" << oldBaseSalary << endl;
			derivedPtr->setBaseSalary( 1.10 * oldBaseSalary );
			cout << "new base salary width 10% increase is: $"
				<< derivedPtr->getBaseSalary() << endl;
		}

		cout << "earned $" << employees[i]->earnings() << "\n\n";
	}

	for ( size_t j = 0; j < employees.size(); j++ )
	{
		cout << "deleting object of "
			<< typeid( *employees[ j ] ).name() <<endl;

		delete employees[ j ];
	}
	
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
