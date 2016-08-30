// Fig. 6.12: fig06_12.cpp
// A scoping example.
#include <iostream>
using std::cout;
using std::endl;

void useLocal( void );
void useStaticLocal( void );
void useGlobal( void );

int x = 1;

int main()
{
	int x = 5;
	
	cout << "local x in main's outer scope is " << x << endl;

	{
		int x = 7;
		
		cout << "local x in main's inner scope is "<< x << endl;
	}

	cout << "local x in main's outer scope is " << x << endl;

	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();

	cout << "\nlocal x in main is " << x << endl;

	return 0;
}

void useLocal( void )
{
	int x = 25;

	cout << "\nlocal x is " << x << " on entering useLocal" << endl;
	x++;
	cout << "local x is " << x << " on exiting useLocal" << endl;
}

void useStaticLocal( void )
{
	static int x = 50;

	cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
	x++;
	cout << "local static x is " << x << " on exiting useStaticLocal" << endl;
}

void useGlobal( void )
{
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
	x *= 10;
	cout << "global x is " << x << " on exiting useGlobal" << endl;
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
