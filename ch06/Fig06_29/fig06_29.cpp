// Fig. 6.29: fig06_29.cpp
// Testing the recursive factorial function.

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

unsigned long factorial( unsigned long );

int main()
{
	for ( int counter = 0; counter <= 10; counter++ ) 
	{
		cout << setw( 2 ) << counter << "! = " << factorial( counter ) << endl; 
	}

	return 0;
}

unsigned long factorial( unsigned long number )
{
	if ( number <= 1 )
	{
		return 1;
	}
	else 
	{
		return number * factorial( number - 1 );
	}
}

/*************************************************************************
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
*************************************************************************/
