// Fig. 7.13: fig07_13.cpp
// Static arrays are initialized to zero.
#include <iostream>
using std::cout;
using std::endl;

void staticArrayInit( void );
void automaticArrayInit( void );

int main()
{
	cout << "First call to each function: " << endl;
	staticArrayInit();
	automaticArrayInit();

	cout << "\n\nSecond call to each function: " << endl;
	staticArrayInit();
	automaticArrayInit();

	cout << endl;

	return 0;
}

void staticArrayInit( void )
{
	static int array1[ 3 ];	
	
	cout << "Values on entering staticArrayInit: \n";
	for ( int i = 0; i < 3; i++ )
	{
		cout << "array1[ " << i << " ] = " << array1[ i ] << " ";
	}

	cout << "\nValues on exiting staticArrayInit: \n";
	for ( int j = 0; j < 3; j++ )
	{
		cout << "array1[ " << j << " ] = " << (array1[ j ] += 5) << " ";
	}
}

void automaticArrayInit( void )
{
	int array2[ 3 ] = { 1, 2, 3 };

	cout << "\nValue on entering automaticArrayInit: \n";
	for ( int k = 0; k < 3; k ++ )
	{
		cout << "array2[ " << k << " ] = " << array2[ k ] << " ";
	}

	cout <<"\nValue on exiting automaticArrayInit: \n";
	for (int a = 0; a < 3; a++ )
	{
		cout << "array2[ " << a << " ] = " << (array2[ a ] += 5 ) << " "; 
	} 
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
