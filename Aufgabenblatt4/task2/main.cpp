#include <iostream>
#include <string>
using namespace std;

/*Schreiben Sie eine Funktion, die einen String und eine ganze Zahl n
als Parameter erhält und die Cäsar-Kodierung 
des Eingangsstrings retourniert. 
Dabei ist jedes Zeichen im Eingangsstring durch seinen n-ten Nachfolger zu ersetzen.
Das Alphabet stellt man sich dabei zyklisch vor. 
Ist n z.B. 3, so wird aus einem 'A' ein 'D' etc., 'Z' wird zu 'C'. 
Testen Sie Ihre Funktion mit einem Hauptprogramm, das immer wieder einen String und eine
ganze Zahl einliest und den entsprechend codierten String ausgibt, so lange bis EOF gelesen wird, z. B.:

Eingabe: Test 1
Ausgabe: Uftu
Eingabe: Zar 2
Ausgabe: Bct
Eingabe: Ctrl-D   Programmende*/



string caeser(string str, int n){
   int len = str.length();
   string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   string output;
   for(int i =0; i < len; i++){
      int index;
      int cap;
      if((int) str[i] < 97){
         index = (int) str[i] - 65;
         cap = 0;
      }
      else{
         index = (int) str[i] - 97;
         cap = 26;
      }
      output += alphabet[(n+index)%26+cap];
   }
   return output;
}

int main()
{

   string test_string = "Zar";
   int test_int = 2;
   while(cin>> test_string >> test_int){
      cout << caeser(test_string,test_int) << endl;
   }
   return 0;
}