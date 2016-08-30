// Fig. 7.23: GradeBook.h
// Definition of class GradeBook that use a 
// two-dimensional array to store test grades.
//Member function are defined in GradeBook.cpp
#include <string>
using std::string;

class GradeBook
{
public:
	const static int students = 10;
	const static int tests = 3;

	GradeBook( string, const int [][ tests ] );

	void setCourseName( string );
	string getCourseName();
	void displayMessage();
	void processGrades();
	int getMinimum();
	int getMaximum();
	double getAverage( const int [], const int);
	void outputBarChart();
	void outputGrades();

private:
	string courseName;
	int grades[ students ][ tests ];	  
};



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
