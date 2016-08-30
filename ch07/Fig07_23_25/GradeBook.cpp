// Fig. 7.24: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses a two-dimensional array to store grades.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "GradeBook.h"

GradeBook::GradeBook( string name, const int gradesArray[][ tests ] )
{
	setCourseName( name );

	for ( int student = 0; student < students; student++ )
	{
		for ( int test = 0; test < tests; test++ )
		{
			grades[ student ][ test ] = gradesArray[ student ][ test ];
		}
	}
}

void GradeBook::setCourseName( string name )
{
	courseName = name;
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

	cout << "\nLowest garde in the grade book is " << getMinimum()
		<< "\nHighest grade in the grade book is " << getMaximum() << endl;

	cout << endl;

	outputBarChart();
}

int GradeBook::getMinimum()
{
	int lowGrade = 100;
	
	for ( int student = 0; student < students; student++ )
	{
		for (int test = 0; test < tests; test++ )
		{
			if ( grades[ student ][ test ] < lowGrade )
				lowGrade = grades[ student ][ test ];
		}
	}
	
	return lowGrade;
}

int GradeBook::getMaximum()
{
	int highGrade = 0;
	
	for ( int student = 0; student < students; student++ )
	{
		for ( int test = 0; test < tests; test++ )
		{
			if ( grades[ student ][ test ] > highGrade )
				highGrade = grades[ student ][ test ];
		}
	}

	return highGrade;
}

double GradeBook::getAverage( const int setOfGrades[], const int grades )
{
	int total = 0;

	for ( int grade = 0; grade < grades; grade++ )
	{
		total += setOfGrades[ grade ];
	}

	return static_cast< double >( total ) / grades;
}

void GradeBook::outputGrades()
{
	cout << "\nThe Grades are:\n\n";
	cout << setw( 18 ) << "Test 1" << setw( 8 ) << "Test 2" 
		<< setw( 8 ) << "Test 3" << setw( 9 ) << "Average" <<endl;
	
	int a[ tests ] = { 0 };
	int b[ students ] = { 0 };

	for ( int i = 0; i < students; i++ )
	{
		cout << "Student" << setw( 3 ) << ( i + 1 );
		for ( int j = 0; j < tests; j++ )
		{
			cout << setw( 8 ) << grades[ i ][ j ];
			a[ j ]= grades[ i ][ j ];	
		}
		cout << setw( 9 ) << setprecision(2) << fixed << getAverage( a , tests ) << endl;	
		
	}
	
	cout << "Average" << setw(3) << " ";
	for ( int x = 0; x < tests; x++ )
	{
		for ( int y = 0; y < students; y++ )
		{
			b[ y ] = grades[ y ][ x ];
		}
	
		cout << setw( 8 ) << setprecision( 2 ) << fixed << getAverage( b, students );
	}
	cout << endl;
}

void GradeBook::outputBarChart()
{
	cout << "\nOverall grade distribution:\n";
	
	const int frequencySize = 11;
	int frequencyArray[ frequencySize ] = { 0 };

	for ( int student = 0; student < students; student++ )
	{
		for ( int test = 0; test < tests; test++ )
		{
			frequencyArray[ grades[ student ][ test ] / 10 ]++;
		}
	}

	for ( int level = 0; level < frequencySize; level++ )
	{
		if ( level == 0 )
		{
			cout << setw( 5 ) << "0-9" << ":";
		}
		else if ( level == 10 )
		{
			cout << setw( 5 ) << "100" << ":";
		}
		else
		{
			cout << level * 10 << "-" << ( level * 10 + 9 ) << ":";
		}
		
		for ( int i = 0; i < frequencyArray[ level ]; i++ )
		{
			cout << "*";
		}
		cout << endl;
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
