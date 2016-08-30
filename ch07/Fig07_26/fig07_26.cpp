// Fig. 7.26: fig07_26.cpp
// Demonstrating C++ Standard Library class template vector.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

void outputVector( const vector< int > & );	//display the vector
void inputVector( vector< int > & );			//input values into the vector

int main()
{
	vector< int > integers1( 7 );	//7-element vector< int >
	vector< int > integers2( 10 );	//10-element vectoe< int >

	cout << "Size of vector integers1 is " << integers1.size()
		<< "\nVector after initialization:" << endl;
	outputVector( integers1 );

	cout << "\nSize of vectoe integers2 is " << integers2.size()
		<< "\nVector after initialization:" << endl;
	outputVector( integers2 );


	cout << "\nEnter 17 integers:" << endl;
	inputVector( integers1 );
	inputVector( integers2 );

	cout << "\nAfter input, the vector contain:\n"
		<< "integers1:" << endl;
	outputVector( integers1 );
	cout << "integers2:" << endl;
	outputVector( integers2 );

	cout << "\nEvaluating: integers1 != integers2" << endl;
	if ( integers1 != integers2 )
	{
		cout << "integers1 and integers2 are not equal" << endl;
	}


	vector< int > integers3( integers1 );

	cout << "\nSize of vector integers3 is " << integers3.size()
		<< "\nVector after initialization:" << endl;
	outputVector( integers3 );

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1:" << endl;
	outputVector( integers1 );
	cout << "integers2:" << endl;
	outputVector( integers2 );

	cout << "\nEvaluating: integers1 == integers2" << endl;
	if ( integers1 == integers2 )
	{
		cout << "integers1 and integers2 are equal" << endl;
	} 

	cout << "\nintegers1[ 5 ] is " << integers1[ 5 ];

	cout << "\n\nAssigning 1000 to integers[ 5 ]" << endl;
	integers1[ 5 ] = 1000;
	cout << "integers1:" << endl;
	outputVector( integers1 );

	cout << "\nAttempt to assign 1000 to integers1.at( 15 )" << endl;
	integers1.at( 15 ) = 1000;

	return 0;
}

void outputVector( const vector< int > &array )
{
	size_t i;

	for ( i = 0; i < array.size(); i++ )
	{
		cout << setw(12) << array[i];

		if ( (i + 1) % 4 == 0)
			cout << endl;
	}

	if ( i % 4 != 0 )
		cout << endl;
} 

void inputVector( vector< int > &array )
{
	for ( size_t i = 0; i < array.size(); i++ )
	{
		cin >> array[ i ];
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
