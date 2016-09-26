// Fig. 21.20: Treenode.h
// Template TreeNode class definition.
#ifndef TREENODE_H
#define TREENODE_H

template< typename NODETYPE > class Tree;

template< typename NODETYPE >
class TreeNode
{
	friend class Tree< NODETYPE >;
public:
	TreeNode( const NODETYPE &d )
		: leftPtr( 0 ),
		  data( d ),
		  rightPtr( 0 )
	{
		
	}
	NODETYPE getData() const
	{
		return data;
	}
private:
	TreeNode< NODETYPE > *leftPtr;
	NODETYPE data;
	TreeNode< NODETYPE > *rightPtr;
};

#endif

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
