#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben sie 5 Werte der Testreihe ein: ";
   double val;
   double mean = 0;
   for (int i = 0; i < 5; i++)
   {
      cin >> val;
      mean += val;
   };
   mean /= 5;
   cout << "Der Durchschnitt der Testreihe lautet: " << mean;
   return 0;
}