// Fig. 21.15: Stackcomposition.h
// Template Stack class definition with composed List object.
#ifndef STACKCOMPOSITION_H
#define STACKCOMPOSITION_H

#include "List.h"

template< typename STACKTYPE >
class Stack
{
public:
	void push( const STACKTYPE &data )
	{
		stackList.insertAtFront( data );
	}

	bool pop( STACKTYPE &data)
	{
		return stackList.removeFromFront( data );
	}

	bool isStackEmpty() const
	{
		return stackList.isEmpty();
	}

	void printStack() const
	{
		stackList.print();
	}
private:
	List< STACKTYPE > stackList;
};


#endif


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
