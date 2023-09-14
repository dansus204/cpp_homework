#include <stdio.h>
#include <iostream>

using namespace std;

int cubeV(int a) {
   return a*a*a;
}

int main()
{
   int a = 10;
   cout << cubeV(a) << '\n';
   return 0;
}
