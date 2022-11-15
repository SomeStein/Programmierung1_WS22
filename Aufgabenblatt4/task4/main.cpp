#include <iostream>
#include <string>
using namespace std;

/*Schreiben Sie eine Funktion, die einen String (nur Kleinbuchstaben)
als Parameter erhält und einen String retourniert,
in der das erste Zeichen der Eingangszeichenkette alphabetisch korrekt einsortiert ist.
Das heißt im Ergebnis sollen zunächst alle Zeichen, die kleiner als das ursprünglich erste Zeichen sind,
dann dieses erste Zeichen und schließlich die Zeichen,
die größer als (oder gleich wie) das ursprünglich erste Zeichen sind, auftreten, z. B.:

Eingangsstring: keinblasserschimmer
retournierter String (auch andere Lösungen sind möglich): eibaechieknlssrsmmr*/

string sort_first_char(string str)
{
  string output;
  int len = str.length();
  for (int i = 0; i < len; i++)
  {
    if (str[i] < str[0])
    {
      output += str[i];
    }
  }
  for (int i = 0; i < len; i++)
  {
    if (str[i] >= str[0])
    {
      output += str[i];
    }
  }
  return output;
}
int main()
{
  string test_string;
  cout << "Geben Sie strings ein, dessen erster character sortiert werden soll: " << endl;
  while (cin >> test_string)
  {
    cout << sort_first_char(test_string) << endl;
  }
  return 0;
}
