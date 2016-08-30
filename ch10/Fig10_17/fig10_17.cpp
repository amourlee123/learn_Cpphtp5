// Fig. 10.17: fig10_17.cpp  
// Using the this pointer to refer to object members.
#include <iostream>
using std::cout;
using std::endl;

class Test
{
public:
	Test( int = 0 );
	void print() const;
private:
	int x;
};

Test::Test( int value )
	: x( value )
{
	
}

void Test::print() const
{
	cout << "        x = " << x << endl;

	cout << "  this->x = " << this->x << endl;

	cout << "(*this).x = " << (*this).x << endl;
}

int main()
{
	Test testObject( 12 );
	testObject.print();
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
