// Fig. 21.4: List.h
// Template List class definition.

#ifndef LIST_H
#define LIST_H

#include <iostream>
using std::cout;
using std::endl;

#include "ListNode.h"

template< typename NODETYPE >
class List
{
public:
	List();
	~List();
	void insertAtFront( const NODETYPE & );
	void insertAtBack( const NODETYPE & );
	bool removeFromFront( NODETYPE & );
	bool removeFromBack( NODETYPE & );
	bool isEmpty() const;
	void print() const;
private:
	ListNode< NODETYPE > *firstPtr;
	ListNode< NODETYPE > *lastPtr;
	
	ListNode< NODETYPE > *getNewNode( const NODETYPE & );
};

template< typename NODETYPE >
List< NODETYPE >::List()
	: firstPtr( 0 ), lastPtr( 0 )
{

}

template< typename NODETYPE >
List< NODETYPE >::~List()
{
	if( !isEmpty() )
	{
		cout << "Destroying nodes ...\n";

		ListNode< NODETYPE > *currentPtr = firstPtr;
		ListNode< NODETYPE > *tempPtr;

		while( currentPtr != 0 )
		{
			tempPtr = currentPtr;
			cout << tempPtr->data << "\n";
			currentPtr = tempPtr->nextPtr;
			delete tempPtr;
		}
	}

	cout << "All nodes destroyed\n\n";
}

template< typename NODETYPE >
void List< NODETYPE >::insertAtFront( const NODETYPE &value )
{
	ListNode< NODETYPE > *newPtr = getNewNode( value );

	if( isEmpty() )
	{
		firstPtr = lastPtr = newPtr;
	}
	else 
		newPtr->nextPtr = firstPtr;
		firstPtr = newPtr;
}

template< typename NODETYPE >
void List< NODETYPE >::insertAtBack( const NODETYPE &value )
{
	ListNode< NODETYPE > *newPtr = getNewNode( value );
	
	if( isEmpty() )
	{
		firstPtr = lastPtr = newPtr;
	}
	else
	{
		lastPtr->nextPtr = newPtr;
		lastPtr = newPtr;
	}
}

template< typename NODETYPE >
bool List< NODETYPE >::removeFromFront( NODETYPE &value )
{
	if( isEmpty() )
		return false;
	
	else
	{
		ListNode< NODETYPE > *tempPtr = firstPtr;

		if( firstPtr == lastPtr )
			firstPtr = lastPtr = 0;
		else
			firstPtr = firstPtr->nextPtr;

		value = tempPtr->data;
		delete tempPtr;
		return true;
	}
}


template< typename NODETYPE >
bool List< NODETYPE >::removeFromBack( NODETYPE &value )
{
	ListNode< NODETYPE > *tempPtr = lastPtr;
	
	if( isEmpty() )
		return false;

	else
	{
		ListNode< NODETYPE > *currentPtr = firstPtr;
	
		while( currentPtr->nextPtr != lastPtr )
			currentPtr = currentPtr->nextPtr;	
		
		lastPtr = currentPtr;
		currentPtr->nextPtr = 0;
	}

	value = tempPtr->data;
	delete tempPtr;
	return true;
}

template< typename NODETYPE>
bool List< NODETYPE >::isEmpty() const
{
	return firstPtr == 0;
}

template< typename NODETYPE>
void List< NODETYPE >::print() const
{
	if( isEmpty() )
	{
		cout << "The list is empty\n\n";
		return;
	}
	
	ListNode< NODETYPE > *currentPtr = firstPtr;

	cout << "The List is: ";

	while( currentPtr != 0 )	
	{
		cout << currentPtr->data << ' ';
		currentPtr = currentPtr->nextPtr;
	}

	cout << "\n\n";
}

template< typename NODETYPE>
ListNode< NODETYPE > *List< NODETYPE >::getNewNode(
	const NODETYPE &value )
{
	return new ListNode< NODETYPE >( value );
}

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
