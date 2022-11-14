#include <iostream>
#include <string>
using namespace std;

/*Schreiben Sie eine Funktion, die einen String und ein Zeichen als Parameter erhält
 und den String retourniert, der entsteht, wenn das Zeichen aus dem String entfernt wird 
 (man muss das Zeichen nicht explizit aus dem String löschen. Es ist vielleicht einfacher, 
 einen neuen String als Kopie des Eingangsstrings - Zeichen für Zeichen - 
 anzulegen und beim Kopieren das zu "löschende" Zeichen einfach zu ignorieren). 
 Schreiben Sie zum Testen ein Hauptprogramm, das zunächst einen String einliest 
 und dann immer wieder ein einzelnes Zeichen liest und das Ergebnis ausgibt, 
 wenn das zuletzt eingegebene Zeichen aus dem String entfernt wird. 
 Das Programm soll durch Eingabe von EOF beendet werden, z. B.:

Eingabe: KrankeSchwestern
Eingabe: K
Ausgabe: rankeSchwestern
Eingabe: e
Ausgabe: KrankSchwstrn
Eingabe:  Ctrl-D
Programmende
 */

string str_without(string str, char c){

   string sliced_string; int len = str.length();

   for( int i = 0; i < len; i++){
      char c_current = str[i];
      if(c != c_current){
         sliced_string += c_current;
      }
   }
   return sliced_string;
}

int main()
{
   string test_string;
   char test_char;
   cin >> test_string >> test_char;

   cout << str_without(test_string,test_char);
 
}