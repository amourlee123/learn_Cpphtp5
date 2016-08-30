// Fig. 7.17: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses an array to store test grades.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "GradeBook.h"

GradeBook::GradeBook( string name, const int gradesArray[] )
{
	setCourseName( name );

	for ( int grade = 0; grade < students; grade++ )
	{
		grades[ grade ] = gradesArray[ grade ];
	}
}

void GradeBook::setCourseName( string name )
{
	if ( name.length() <= 25 )
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
	cout << "Welcome to the grade book for \n" 
		<< getCourseName() << "!" << endl;
}

void GradeBook::processGrades()
{
	outputGrades();

	cout << "\nClass average is " <<setprecision( 2 ) << fixed << getAverage() << endl;

	cout << "Lowest grade is " << getMinimum()
		<< "\nHighest grade is " << getMaximum() << endl;

	outputBarChart();
}

int GradeBook::getMinimum()
{
	int lowGrade = 100;
	
	for ( int i = 0; i < students; i++ )
	{
		if ( lowGrade > grades[ i ] )
		{
			lowGrade = grades[ i ];
		}
	}

	return lowGrade;
}

int GradeBook::getMaximum()
{
	int highGrade = 0;
	
	for ( int j = 0; j < students; j++ )
	{
		if ( grades[ j ] > highGrade )
		{
			highGrade = grades[ j ];
		}
	}

	return highGrade;
}

double GradeBook::getAverage()
{
	int total = 0;

	for ( int grade = 0; grade < students; grade++ )
	{
		total += grades[ grade ];
	}

	return static_cast < double >( total) / students;
}

void GradeBook::outputBarChart()
{
	cout << "\nGrade distribution:\n";
	
	const int frequencySize = 11;
	int frequency[ frequencySize ] = { 0 };

	for ( int i = 0 ; i < students; i++ )
	{
		frequency[ grades[ i ] / 10 ] ++;
	}

	for ( int counter = 0; counter < frequencySize; counter++ )
	{
		if ( counter == 0 )
		{
			cout << setw( 5 ) << "0-9" << ":";
		}
		else if ( counter == 10 )
		{
			cout << setw( 5 ) << "100" << ":";
		}
		else
		{
			cout << counter * 10 << "-" << counter * 10 + 9 <<":";
		}

		for (int stars = 0; stars < frequency[ counter ]; stars++ )
		{
			cout << "*";
		}

		cout << endl;
	}
}

void GradeBook::outputGrades()
{
	cout << "\nThe grade are:\n";

	for ( int grade = 0; grade < students; grade++ )
	{
		cout << "Student" << setw( 3 ) << (grade + 1) << setw( 4 ) << grades[ grade ]
			<< endl;
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
