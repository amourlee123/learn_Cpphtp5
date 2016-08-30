// comparing integers using if statements, relational operators
// and equality operators.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//function main begins program execution
int main()
{
	int number1;
	int number2;

	cout << "Enter two integers to compare: ";
	cin >> number1 >> number2;

	if ( number1 == number2 ){
		cout << number1 << " == " << number2 << endl;
	}	

	if ( number1 != number2 ){
		cout << number1 << " != " << number2 << endl;
	}

	if ( number1 > number2 ){
		cout << number1 << " > " << number2 << endl;
	}

	if ( number1 < number2 ){
		cout << number1 << " < " << number2 << endl;
	}

	if ( number1 >= number2 ){
		cout << number1 << " >= " << number2 << endl;
	}

	if ( number1 <= number2 ){
		cout << number1 << " <= " << number2 << endl;
	}
	
	return 0;
}
