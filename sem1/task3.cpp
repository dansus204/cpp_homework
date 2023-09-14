#include <stdio.h>
#include <iostream>

using namespace std;

void cubeV(int& a) {
   a = a*a*a;
}

int main()
{
   int a = 10;
   cubeV(a);
   cout << a << '\n';
   return 0;
}
