#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben Sie 5 Werte einer Messreihe ein: ";
   float a, b, c, d, e;
   cin >> a;
   cin >> b;
   cin >> c;
   cin >> d;
   cin >> e;
   cout << "Der Durchschnitt entspricht " << (a + b + c + d + e) / 5;
   return 0;
}