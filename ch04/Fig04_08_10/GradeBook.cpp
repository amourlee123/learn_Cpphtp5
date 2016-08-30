// Fig. 4.9: GradeBook.cpp
// Member-function definitions for class GradeBook that solves the 
// class average program with counter-controlled repetition.
// #include <iostream>
// using std::cout;
// using std::cin;
// using std::endl;

// #include "GradeBook.h" // include definition of class GradeBook

// constructor initializes courseName with string supplied as argument
// GradeBook::GradeBook( string name )
// {
//    setCourseName( name ); // validate and store courseName
// } // end GradeBook constructor

// function to set the course name;
// ensures that the course name has at most 25 characters
// void GradeBook::setCourseName( string name )
// {
//    if ( name.length() <= 25 ) // if name has 25 or fewer characters
//       courseName = name; // store the course name in the object
//    else // if name is longer than 25 characters
//    { // set courseName to first 25 characters of parameter name
//       courseName = name.substr( 0, 25 ); // select first 25 characters
//       cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
//          << "Limiting courseName to first 25 characters.\n" << endl;
//    } // end if...else
// } // end function setCourseName

// function to retrieve the course name
// string GradeBook::getCourseName()
// {
//    return courseName;
// } // end function getCourseName

// display a welcome message to the GradeBook user
// void GradeBook::displayMessage()
// {
//    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" 
//       << endl;
// } // end function displayMessage

// determine class average based on 10 grades entered by user
// void GradeBook::determineClassAverage()
// {
//   int total; // sum of grades entered by user
//   int gradeCounter; // number of the grade to be entered next
//   int grade; // grade value entered by user
//   int average; // average of grades

   // initialization phase
//   total = 0; // initialize total
//   gradeCounter = 1; // initialize loop counter

   // processing phase
//   while ( gradeCounter <= 10 ) // loop 10 times
//   {
//      cout << "Enter grade: "; // prompt for input
//      cin >> grade; // input next grade
//      total = total + grade; // add grade to total
//      gradeCounter = gradeCounter + 1; // increment counter by 1
//   } // end while

   // termination phase
//   average = total / 10; // integer division yields integer result

   // display total and average of grades
//   cout << "\nTotal of all 10 grades is " << total << endl;
//   cout << "Class average is " << average << endl; 
//} // end function determineClassAverage


/*************************************************************************/
// Member-function definitions for class GradeBook that solves the
// class average program with counter-controlles repetition.
#include <iostream>
using std::cout;
using std::cin;
using std::getline;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook( string name )
{
	setCourseName( name );
}

void GradeBook::setCourseName(string name)
{
	if( name.length() <= 25 )
	{
		courseName = name;
	}
	else
	{
		courseName = name.substr( 0, 25 );
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limition courseName to first 25 charaters.\n" << endl;
	}
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}

void GradeBook::determineClassAverage()
{
	int total;
	int gradeCounter;
	int grade;
	int average;

	total = 0;
	gradeCounter = 1;

	while (gradeCounter <= 10)
	{
		cout << "Enter grade: ";
		cin >> grade;
		total += grade;
		gradeCounter++;
	}
	
	average = total / 10;

	cout << "\nTotal of all 10 grades is: " << total << endl;
	cout << "Class average is: " << average << endl;
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
