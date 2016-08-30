// Fig. 6.11: fig06_11.cpp
// Craps simulation.
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int rollDice();

int main()
{
	enum Status { CONTINUE, WON, LOST };

	int myPoint;
	Status gameStatus;

	srand( time( 0 ) );

	int sumOfDice = rollDice();

	switch ( sumOfDice )
	{
		case 7:
		case 11:
			gameStatus = WON;
			break;

		case 2:
		case 3:
		case 12:
			gameStatus = LOST;

		default:
			gameStatus = CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is " << myPoint << endl;
			break;
	}

	while ( gameStatus == CONTINUE )
	{
		sumOfDice = rollDice();
		
		if ( sumOfDice == myPoint )
		{
			gameStatus = WON;
		}
		else
			if ( sumOfDice == 7 )
			{
				gameStatus = LOST;
			}
	}

	if ( gameStatus == WON )
	{
		cout << "Player wins" << endl;
	}
	else
	{
		cout << "Player loses" << endl;
	}

	return 0;
}

int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;

	int sum = die1 + die2;

	cout << "Player rolles " << die1 << " + " << die2 << " = " << sum << endl;

	return sum; 
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
