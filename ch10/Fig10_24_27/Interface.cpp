// Fig. 10.26: Interface.cpp
// Implementation of class Interface--client receives this file only 
// as precompiled object code, keeping the implementation hidden.
#include "Interface.h"
#include "Implementation.h"

Interface::Interface( int v )
	: ptr ( new Implementation( v ) )
{
	
}

void Interface::setValue( int v )
{
	ptr->setValue( v );
}

int Interface::getValue() const
{
	return ptr->getValue();
}

Interface::~Interface()
{
	delete ptr;
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
