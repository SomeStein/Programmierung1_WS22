#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*Schreiben Sie ein Programm zur Lösung der quadratischen Gleichung
x²+px+q=0 (Achtung: eventuelle komplexe Lösungen beachten). Anmerkung:
In der Bibliothek cmath befindet sich die Funktion sqrt(), die zur Berechnung
der Quadratwurzel dient. Der übergebene Wert sollte nicht kleiner als 0 (Null)
sein, sonst wird ein Fehler ausgelöst.*/

int main()
{
  double p,q;
  cout << "Geben Sie Koeffizienten p und q ein: ";
  cin >> p >> q;

  double lsg1, lsg2;
  if(p*p/4 - q > 0){
    lsg1 = -p/2 + sqrt(p*p/4 - q);
    lsg2 = -p/2 - sqrt(p*p/4 - q);
    cout << lsg1 << " " << lsg2;  
  }
  else{
    cout << "komplexes Radikal";
  }
  
  return 0;
}