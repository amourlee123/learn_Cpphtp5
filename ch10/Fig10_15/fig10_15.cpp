// Fig. 10.15: fig10_15.cpp  
// Friends can access private members of a class.
#include <iostream>
using std::cout;
using std::endl;

class Count
{
	friend void setX( Count &, int );
public:
	Count()
		: x( 0 )
	{
		
	}

	void print() const
	{
		cout << x << endl;
	}
private:
	int x;
};

void setX( Count &c, int val )
{
	c.x = val;
}

int main()
{
	Count counter;

	cout << "counter.x after instantiation: ";
	counter.print();

	setX( counter, 8 );

	cout << "counter. after call to setX friend function: ";
	counter.print();
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
