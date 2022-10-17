#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double x;
   double coef[5];
   double value;
   cout << "Bitte geben sie eine x-Stelle und die Koeffizienten ein an der das Polynom mit jenen Koeffizienten berechnet werden soll: ";
   cin >> x;
   for (int i = 0; i < 5; i++)
   {
      cin >> coef[i];
   };

   cout << "Das Polynom mit den Koeffizienten";
   cout << "  " << coef[0] << "  ";
   value = coef[0];
   for (int i = 1; i < 5; i++)
   {
      cout << coef[i] << "  ";
      value += coef[i] * pow(x, i);
   };
   cout << " hat an der Stelle " << x << " den Wert ";
   cout << value << endl;
   return 0;
}