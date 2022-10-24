#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben sie x als auch Koeffizienten des Polynom 4. Grades ein: ";
   float x, a, b, c, d, e;
   cin >> x;
   cin >> a;
   cin >> b;
   cin >> c;
   cin >> d;
   cin >> e;
   cout << "Das Polynom hat an der Stelle " << x << " den Wert " << a + b * x + c * x * x + d * x * x * x + e * x * x * x * x;
   return 0;
}