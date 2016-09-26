// Fig. 21.22: Fig21_22.cpp
// Tree class test program.
#include <iostream>
using std::cout;
using std::cin;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Tree.h"

int main()
{
	Tree< int > intTree;
	int intValue;

	cout << "Enter 10 integer values:\n";

	for( int i = 0; i < 10; i++ )
	{
		cin >> intValue;
		intTree.insertNode( intValue );
	}

	cout << "\nPreorder traversal\n";
	intTree.preOrderTraversal();

	cout << "\nInorder traversal\n";
	intTree.inOrderTraversal();

	cout << "\nPostorder traversal\n";
	intTree.postOrderTraversal();


	Tree< double > doubleTree;
	double doubleValue;

	cout << fixed << setprecision( 1 )
		<< "\n\nEnter 10 double values:\n";

	for( int j = 0; j < 10; j++ )
	{
		cin >> doubleValue;
		doubleTree.insertNode( doubleValue );
	}

	cout << "\nPreorder traversal\n";
	doubleTree.preOrderTraversal();

	cout << "\nInorder traversal\n";
	doubleTree.inOrderTraversal();

	cout << "\npostOrderTraversal\n";
	doubleTree.postOrderTraversal();

	cout << endl;

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
