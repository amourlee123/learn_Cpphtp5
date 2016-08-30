// Fig. 9.4: fig09_04.cpp
// Demonstrating the class member access operators . and ->
#include <iostream>
using std::cout;
using std::endl;

class Count
{
public:
	void setX( int value )
	{
		x = value;
	}

	void print()
	{
		cout << x << endl;
	}
private:
	int x;
};

int main()
{
	Count counter;
	Count *counterPtr = &counter;
	Count &counterRef = counter;

	cout << "Set x to 1 and print using the object's name: ";
	counter.setX( 1 );
	counter.print();

	cout << "Set x to 2 and print using a reference to an object: ";
	counterRef.setX( 2 );
	counterRef.print();

	cout << "Set x to 3 and print using a pointer to an object: ";
	counterPtr -> setX( 3 );
	counterPtr -> print();

	cout << endl;

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
