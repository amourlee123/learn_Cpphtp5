// Fig. 7.25: fig07_25.cpp
// Creates GradeBook object using a two-dimensional array of grades.
#include "GradeBook.h"

int main()
{
	int gradesArray[ GradeBook::students ][ GradeBook::tests ] = 
	{
		{ 87, 97, 70 },
		{ 94, 87, 100 },
		{ 68, 87, 90 },
		{ 100, 81, 82 },
		{ 83, 65, 85 },
		{ 78, 87, 65 },
		{ 87, 75, 89 },
		{ 91, 94, 100 },
		{ 76, 72, 84 },
		{ 87, 93, 73 }
	};

	GradeBook myGradeBook( "CS101 Introduction to C++ programming", gradesArray );

	myGradeBook.displayMessage();
	myGradeBook.processGrades();

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
