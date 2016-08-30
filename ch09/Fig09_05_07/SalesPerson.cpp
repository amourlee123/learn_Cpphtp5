// Fig. 9.6: SalesPerson.cpp
// Member functions for class SalesPerson.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "SalesPerson.h"

SalesPerson::SalesPerson()
{
	for ( int i = 0; i < 12; i++ )
	{
		sales[ i ] = 0.0;
	}
}

void SalesPerson::getSalesFromUser()
{
	double salesFigure;

	for ( int i = 1; i <= 12; i++ )
	{
		cout << "Enter sales amount for month " << i << ": ";
		cin >> salesFigure;
		setSales( i, salesFigure );
	}
}

void SalesPerson::setSales( int month, double amount )
{
	if( month >= 1 && month <= 12 && amount > 0 )
	{
		sales[ month - 1 ] = amount;
	}
	else
	{
		cout << "Invalid month or sales figure." << endl;
	}
}

void SalesPerson::printAnnualSales()
{
	cout << setprecision( 2 ) << fixed
		<< "\nThe total annual sales are: $"
		<< totalAnnualSales() << endl;
}

double SalesPerson::totalAnnualSales()
{
	double total = 0.0;

	for ( int i = 0; i < 12; i++ )
	{
		total += sales[i];
	}

	return total;
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
