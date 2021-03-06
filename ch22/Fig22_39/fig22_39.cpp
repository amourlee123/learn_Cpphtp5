// Fig. 22.39: fig22_39.cpp
// Using memchr.
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> // memchr prototype
using std::memchr;

int main()
{
   char s[] = "This is a string";

   cout << "s = " << s << "\n" << endl;
   cout << "The remainder of s after character 'r' is found is \""
      << static_cast< char * >( memchr( s, 'r', 16 ) ) << '\"' << endl;
   return 0;
} // end main

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
