#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
	
	const int times = 4;

	int count[ times ] = { 0 };
	int a;

	srand( time( 0 ) );
	
	for( int i = 0; i < 10000; i++ )
	{
		a =  0 + rand() % times;
		count[ a ] += 1;
	}
	for( int j = 0; j < times; j++ )
	{
		cout << "\"" << j + 1 << "\": " << count[ j ] << endl;
	}
	
	return 0;
}
