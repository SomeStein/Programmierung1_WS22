#include <iostream>
using namespace std;

int main()
{
   float price;
   int number;
   float vat;

   cout << "Bitte geben Sie Preis, Anzahl und Steuersatz (zwischen 0 und 1) in dieser Reihenfolge ein: ";

   cin >> price;
   cin >> number;
   cin >> vat;

   cout << "Der resultierende Preis liegt bei " << price * number * (1 + vat) << "***";

   return 0;
}