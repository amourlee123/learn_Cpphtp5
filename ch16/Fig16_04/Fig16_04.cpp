// Fig. 16.4: Fig16_04.cpp
// Demonstrating stack unwinding.
#include <iostream>
using std::cout;
using std::endl;

#include <stdexcept>
using std::runtime_error;

void function3() throw ( runtime_error )
{
	cout << "In function 3" << endl;

	throw runtime_error( "runtime_error in function3" );	
}

void function2() throw ( runtime_error )
{
	cout << "function 3 called inside function 2" << endl;
	
	function3();
}

void function1() throw ( runtime_error )
{
	cout << "function 2 called inside function 1" << endl;

	function2();
}
	
int main()
{
	try
	{
		cout << "function1 is called inside main" << endl;
		function1();
	}
	catch(runtime_error &error)
	{
		cout << "Exception occurred: " << error.what() << endl;
		cout << "Exception handled in main" << endl;
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
