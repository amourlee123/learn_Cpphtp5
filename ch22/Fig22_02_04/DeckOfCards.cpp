// Fig. 22.3: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
	static char *suit[ 4 ] = 
		{ "Hearts", "Diamonds", "Clubs", "Spades" };

	static char *face[ 13 ] = 
		{ "Ace", "deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	for( int i = 0; i < 52; i++ )
	{
		deck[ i ].face = face[ i % 13 ];
		deck[ i ].suit = suit[ i / 13 ];
	}

	srand( time( 0 ) );
}

void DeckOfCards::shuffle()
{
	for( int i = 0; i < 52; i++ )
	{
		int j = rand() % 52;
		Card temp = deck[ i ];
		deck[ i ] = deck[ j ];
		deck[ j ] = temp;
	}
}

void DeckOfCards::deal()
{
	for( int i = 0; i < 52; i++ )
	{
		cout << right << setw( 5 ) << deck[ i ].face << " of "
			<< left << setw( 8 ) << deck[ i ].suit
			<< ( ( i + 1) % 2 ? '\t' : '\n' );
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
