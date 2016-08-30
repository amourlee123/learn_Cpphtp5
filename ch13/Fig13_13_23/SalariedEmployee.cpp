// Fig. 13.16: SalariedEmployee.cpp
// SalariedEmployee class member-function definitions.
#include <iostream>
using std::cout;

#include "SalariedEmployee.h"


SalariedEmployee::SalariedEmployee(
	const string &first, const string &last, const string &ssn, double salary)
	: Employee( first, last, ssn )
{
	setWeeklySalary( salary );
}

void SalariedEmployee::setWeeklySalary( double salary )
{
	weeklySalary = (salary < 0.0 ) ? 0.0 : salary;
}

double SalariedEmployee::getWeeklySalary() const
{
	return weeklySalary;
}

double SalariedEmployee::earnings() const
{
	return getWeeklySalary();
}

void SalariedEmployee::print() const
{
	cout << "salaried employee: ";
	Employee::print();
	cout << "\nweekly salary: " << getWeeklySalary();
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