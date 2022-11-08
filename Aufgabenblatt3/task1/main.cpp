#include <iostream>

/*Sortieren Sie 3 eingelesene double Zahlen ohne Verwendung von logischen Operatoren.
 */

int main()
{
   double a, b, c;

   std::cin >> a >> b >> c;

   double smallest = a;
   double biggest = a;

   // sort by absolut value

   if ((int)((smallest / b)))
   {
      smallest = b;
   }
   if ((int)((smallest / c)))
   {
      smallest = c;
   }

   if ((int)((b / biggest)))
   {
      biggest = b;
   }
   if ((int)((c / biggest)))
   {
      biggest = c;
   }

   double mid = a + b + c - smallest - biggest;

   // sort by positivity

   // if mid is negative mid becomes smallest, smallest becomes mid
   if ((int)mid - abs(mid))
   {
      double temp = mid;
      mid = smallest;
      smallest = temp;
   }

   // if biggest is negative biggest becomes smallest, smallest becomes mid and mid becomes biggest
   if ((int)biggest - abs(biggest))
   {
      double temp = biggest;
      biggest = mid;
      mid = smallest;
      smallest = temp;
   }

   std::cout << smallest << " <= " << mid << " <= " << biggest;
}