#include <iostream>
using namespace std;

/*Schreiben Sie eine Funktion int binomial(int n, int k),
die den Binomialkoeffizienten n über k berechnet.*/

int binomial(int n, int k)
{
   double b = 1;
   for (int i = 1; i <= k; i++)
   {
      b = b * (n + 1 - i) / i;
   }
   return b;
}

int main()
{
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         cout << binomial(i, j) << " ";
      }
      cout <<endl;
   }
   return 0;
}