#include <iostream>
using namespace std;

float fak(int n, int r)
{
   int a = 1;
   for (int i = 0; i < n - r; i++)
   {
      a = a * (n - i);
   };
   return a;
}

int main()
{
   cout << "Die Wahrscheinlichkeit in Österreich einen 6er im Lotto zu erzielen liegt bei ";
   cout << fak(6, 1) / fak(45, 39);
   return 0;
}