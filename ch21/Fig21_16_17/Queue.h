// Fig. 21.16: Queue.h
// Template Queue class definition derived from class List.
#ifndef QUEUE_H
#define QUEUE_H

#include "List.h"
template< typename QUEUETYPE >
class Queue : private List< QUEUETYPE >
{
public:
	void enqueue( const QUEUETYPE &data )
	{
		this->insertAtBack( data );
	}

	bool dequeue( QUEUETYPE &data )
	{
		 return this->removeFromFront( data );
	}

	bool isQueueEmpty() const
	{
		return this->isEmpty();
	}

	void printQueue() const
	{
		this->print();
	}
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
