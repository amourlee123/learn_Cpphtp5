// Fig. 8.26: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
using std::cout;
using std::endl;
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
	for ( int row = 0; row <= 3; row++ )
	{
		for ( int column = 0; column <= 12; column++ )
		{
			deck[row][column] = 0;
		}
	}

	srand( time(0) );
}

void DeckOfCards::shuffle()
{
	int row;
	int column;

	for ( int card = 1; card <= 52; card++ )
	{
		do
		{
			row = rand() % 4;
			column = rand() % 13;
		}while( deck[row][column] != 0 );

		deck[row][column] = card;
	}
}

void DeckOfCards::deal()
{
	static const char *suit[ 4 ] = 
	{ "Hearts", "Diamonds", "Clubs", "Spades" }; 

	static const char *face[ 13 ] =
	{ "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	for( int card = 1; card <=52; card++ )
	{
		for ( int row = 0; row < 4; row++ )
		{
			for ( int column = 0; column < 13; column++ )
			{
				if( deck[row][column] == card )
				{
					cout << setw( 5 ) << right << face[column] << " of " 
						<< setw( 8 ) << left << suit[row] << ( card % 2 == 0 ? '\n' : '\t'); 
				}
			}
		}
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
