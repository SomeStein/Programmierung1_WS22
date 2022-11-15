#include <iostream>
#include <string>
using namespace std;

/*Schreiben Sei eine Funktion, die einen String als Parameter erhält
und als Ergebnis den reversierten Eingangsstring (also von hinten nach vorne gelesen) retourniert.*/

string reverse(string str)
{
   string output;
   int len = str.length();
   for (int i = len - 1; i >= 0; i--)
   {
      output += str[i];
   }
   return output;
}

int main()
{
   cout << "Geben Sie einen string ein: " << endl;
   string test_string;
   while (cin >> test_string)
   {
      cout << reverse(test_string) << endl;
   }
   return 0;
}