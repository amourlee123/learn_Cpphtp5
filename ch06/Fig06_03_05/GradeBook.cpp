// Fig. 6.4: GradeBook.cpp
// Member-function definitions for class GradeBook that
// determines the maximum of three grades.
// #include <iostream>
// using std::cout;
// using std::cin;
// using std::endl;

// #include "GradeBook.h" // include definition of class GradeBook

// constructor initializes courseName with string supplied as argument;
// initializes maximumGrade to 0
// GradeBook::GradeBook( string name )
// {
//    setCourseName( name ); // validate and store courseName
//    maximumGrade = 0; // this value will be replaced by the maximum grade
// } // end GradeBook constructor

// function to set the course name; limits name to 25 or fewer characters
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
   // this statement calls getCourseName to get the 
   // name of the course this GradeBook represents
//    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" 
//       << endl;
// } // end function displayMessage

// input three grades from user; determine maximum
// void GradeBook::inputGrades()
// {
//    int grade1; // first grade entered by user
//    int grade2; // second grade entered by user
//    int grade3; // third grade entered by user

//    cout << "Enter three integer grades: ";
//    cin >> grade1 >> grade2 >> grade3;

   // store maximum in member studentMaximum
//    maximumGrade = maximum( grade1, grade2, grade3 );
// } // end function inputGrades

// returns the maximum of its three integer parameters
// int GradeBook::maximum( int x, int y, int z )
// {
//    int maximumValue = x; // assume x is the largest to start

   // determine whether y is greater than maximumValue
//    if ( y > maximumValue )
//       maximumValue = y; // make y the new maximumValue

   // determine whether z is greater than maximumValue
//    if ( z > maximumValue )
//       maximumValue = z; // make z the new maximumValue

//    return maximumValue;
// } // end function maximum

// display a report based on the grades entered by user
// void GradeBook::displayGradeReport()
// {
   // output maximum of grades entered
//    cout << "Maximum of grades entered: " << maximumGrade << endl;
// } // end function displayGradeReport

/*************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook( string name )
{
	setCourseName( name );
}

void GradeBook::setCourseName( string name )
{
	if( name.length() <= 25 )
	{
		courseName = name;
	}
	else
	{
		courseName = name.substr( 0, 25 );
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl; 
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

void GradeBook::inputGrades()
{
	int grade1;
	int grade2;
	int grade3;

	cout << "Enter three integer grades: ";
	cin >> grade1 >> grade2 >> grade3;

	maximumGrade = maximum( grade1, grade2, grade3 );
}

int GradeBook::maximum( int x, int y, int z )
{
	int maximumValue = x;

	if( y > maximumValue )
	{
		maximumValue = y;
	}

	if( z > maximumValue )
	{
		maximumValue = z;
	}

	return maximumValue;
}

void GradeBook::displayGradeReport()
{
	cout << "Maximum of grades entered: " << maximumGrade << endl;
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
