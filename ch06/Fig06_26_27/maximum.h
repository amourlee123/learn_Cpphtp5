// Fig. 6.26: maximum.h
// Definition of function template maximum.

template <class T>
T maximum( T value1, T value2, T value3 )
{
	T maximumValue = value1;
	
	if ( value2 > maximumValue )
	{
		maximumValue = value2;
	}

	if ( value3 > maximumValue )
	{
		maximumValue = value3;
	}

	return maximumValue;
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
