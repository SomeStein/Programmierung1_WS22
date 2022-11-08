#include <iostream>
#include <string>
using namespace std;

/*(*) Wie Aufgabe 2, allerdings für beliebige reelle Zahlen.
Z. B.:  Eingabe 17.23 Ausgabe eins-sieben-komma-zwei-drei.*/

int main()
{

   string words[10] = {"null", "eins", "zwei", "drei", "vier", "fuenf", "sechs", "sieben", "acht", "neun"};
   double num;
   cout << "Geben Sie eine natürliche, vierstellige Zahl ein: ";
   cin >> num;
   string num_str = to_string(num);
   int num_size = num_str.size();

   for (int i = 0; i < num_size; i++)
   {
      if (i > 0)
      {
         cout << "-";
      };
      if (num_str[i] == '.')
      {
         cout << "komma";
      }
      else
      {
         cout << words[(int)num_str[i] - 48];
      }
   };
   cout << endl;

   return 0;
}