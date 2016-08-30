// Fig. 8.20: fig08_20.cpp
// Using subscripting and pointer notations with arrays.
// 下表表示法，将数组名作为指针的指针/偏移量表示法，指针下标表示法，用指针的指针/偏移量表示法；
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int b[] = { 10, 20, 30, 40 };
	int *bPtr = b;

	cout << "Array n printed with:\n\nArray subscript notation\n";
	for ( int i = 0; i < 4; i++ )
		cout << "b[" << i << "] = " << b[ i ] << endl;

	cout << "\nPointer/offset notation where the pointer is the array name\n";
	for ( int offset1 = 0; offset1 < 4; offset1++ )
		cout << "*(b + " << offset1 << ") = " << *( b + offset1 ) << endl;

	cout << "\nPointer subsscript notation\n";
	for ( int j = 0; j < 4; j++ )
		cout << "bPtr[" << j << "] = " << bPtr[ j ] << endl;

	cout << "\nPointer/offset notation\n";
	for (int offset2 = 0; offset2 < 4; offset2++ )
		cout << "*(bPtr + " << offset2 << ") = " << *( bPtr + offset2 ) << endl;		

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
