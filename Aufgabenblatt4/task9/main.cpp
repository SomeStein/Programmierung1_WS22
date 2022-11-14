#include <iostream>
using namespace std;

/*Lesen Sie beliebig viele double Werte (Abschluss mit EOF) ein,
 und geben Sie das Maximum, das Minimum und den Mittelwert
 der eingegebenen Werte aus.*/

int main()
{
   double min, max, mean, current, n;
   cin >> current;
   min = current;
   max = current;
   mean = current;
   n = 1;
   while (cin >> current)
   {
      if (current < min)
      {
         min = current;
      }
      if (current > max)
      {
         max = current;
      }
      mean *= n;
      mean += current;
      mean /= (n + 1);
      n++;
   }
   cout << "min: " << min << endl;
   cout << "mean: " << mean << endl;
   cout << "max: " << max << endl;
   return 0;
}