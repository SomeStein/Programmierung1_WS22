#include <iostream>
using namespace std;

int main()
{
   // H 1 g/mol O 16 g/mol  2 H_2 + O_2 -> 2 H_2O => 1/8 in weight
   cout << "Bitte geben Sie die Menge an Wasserstoff in Gramm an: ";
   float weight;
   cin >> weight;
   cout << "Es werden " << weight / 8 << " Gramm an Sauerstoff für die verbrennung gebraucht.";
   return 0;
}