#include <stdio.h>
#include <iostream>

namespace myspace {
   void printNTimes(const char* str, int n = 10) {
      for (int i = 0; i < n; ++i)
         std::cout << str;
   }
}


int main()
{
   char str[] = "abc";
   int n = 10;
   myspace::printNTimes(str, n);
   return 0;
}
