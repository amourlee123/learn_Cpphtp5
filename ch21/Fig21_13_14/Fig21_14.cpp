// Fig. 21.14: Fig21_14.cpp
// Template Stack class test program.
#include <iostream>
using std::cout;
using std::endl;

#include "Stack.h"

int main()
{
	Stack< int > intStack;

	cout << "processing an integer Stack" << endl;

	for( int i = 0; i < 3; i++ )
	{
		intStack.push( i );
		intStack.printStack();
	}

	int popInteger;

	while( !intStack.isStackEmpty() )
	{
		intStack.pop( popInteger );
		cout << popInteger << " poped from stack" << endl;
		intStack.printStack();
	}

	Stack< double > doubleStack;
	double value = 1.1;
	
	cout << "processing a double Stack" << endl;

	for ( int j = 0; j < 3; j++ )
	{
		doubleStack.push( value );
		doubleStack.printStack();
		value += 1.1;
	}

	double popDouble;

	while( !doubleStack.isStackEmpty() )
	{
		doubleStack.pop( popDouble );
		cout << popDouble << " poped from stack" << endl;
		doubleStack.printStack();
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
