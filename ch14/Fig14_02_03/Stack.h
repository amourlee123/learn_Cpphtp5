// Fig. 14.2: Stack.h
// Stack class template.
#ifndef STACK_H
#define STACK_H

template< typename T >
class Stack
{
public:
	Stack( int = 10 );
	
	~Stack()
	{
		delete [] stackPtr;	
	}

	bool push( const T& );
	bool pop( T& );

	bool isEmpty() const
	{
		return top == -1;
	}

	bool isFull() const
	{
		return top == size - 1;
	}

private:
	int size;
	int top;
	T *stackPtr;
};

template< typename T >
Stack< T >::Stack( int s )
	: size( s > 0 ? s : 10 ),
	  top( -1 ),
	  stackPtr( new T[ size ] )
{
	//
}

template< typename T >
bool Stack< T >::push( const T &pushValue )
{
	if( !isFull() )
	{
		stackPtr[ ++top ] = pushValue;
		return true;
	}

	return false;
}

template< typename T >
bool Stack< T >::pop( T &popValue )
{
	if( !isEmpty() )
	{
		popValue = stackPtr[ top-- ];
		return true;
	}

	return false;
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
