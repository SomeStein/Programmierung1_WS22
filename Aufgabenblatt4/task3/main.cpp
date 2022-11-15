#include <iostream>
#include <string>
using namespace std;

/*Schreiben Sie eine Funktion, die einen String und ein Zeichen als Parameter erhält
und eine ganze Zahl retourniert. Der Retourwert soll die Anzahl des Auftretens des Zeichens im String sein.
Testen Sie ihre Funktion mit einem Hauptprogramm, das immer wieder einen String einliest
und dann eine Liste der Häufigkeiten aller im String verwendeten Zeichen ausgibt, 
bis EOF eingelesen wird, z. B.:

Eingabe: achtung,test
Ausgabe: ,(1) a(1) c(1) e(1) g(1) h(1) n(1) s(1) t(3) u(1)
Eingabe: blabla
Ausgabe: a(2) b(2) l(2)
Eingabe: Ctrl-D
Programmende*/

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

int count(string str, char c){
  int count = 0; 
  int len = str.length();
  for(int i = 0; i < len; i++){
    if (str[i] == c){
      count ++;
    }
  }
  return count;
}

int main()
{
  string test_string;
  cout << "Geben Sie einen String ein dessen Character Sie auflisten wollen: ";
  while(cin >> test_string){
    int len = test_string.length();
    for(int i = 0; i < len; i++){
      if(test_string == ""){
      break;
    }
      char c = test_string[0];
      cout << c << " " <<count(test_string, c) << endl;
      test_string = str_without(test_string, c);
    }
  }
  return 0;
}