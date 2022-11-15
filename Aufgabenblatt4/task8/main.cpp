#include <iostream>
using namespace std;

/*Schreiben Sie die Funktionen int mult(int m, int n) und int power(int m, unsigned int n),
die das Produkt m∗n bzw. die Exponentialfunktion m**n
der ganzen Zahlen m und n berechnen.
Verwenden Sie dazu nicht den Operator * (Multiplikation).
Auch das Verwenden irgendwelcher externer Routinen (z. B. Mathematikbibliotheken) ist nicht erlaubt!
Beachten Sie, dass int-Werte auch negativ oder gleich 0 sein können.

Hinweis: m∗n=m+m∗(n−1) für n>0 bzw. m**n =m∗m**(n−1)*/

int mult(int m, int n)
{
   if (n == 0)
   {
      return 0;
   }
   if (n < 0)
   {
      return -mult(m, abs(n));
   }
   return m + mult(m, n - 1);
}

int power(int m, unsigned int n)
{
   if (n == 0)
      return 1;
   return mult(power(m, n - 1), m);
}

int main()
{
   for (int i = -3; i < 4; i++)
   {
      for (int j = -3; j < 4; j++)
      {
         cout << mult(i, j) << "  ";
      }
      cout << endl;
   }
   cout << endl;
   for (int i = -3; i < 4; i++)
   {
      for (int j = 0; j < 7; j++)
      {
         cout << power(i, j) << "  ";
      }
      cout << endl;
   }
   return 0;
}