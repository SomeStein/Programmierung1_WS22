#include <iostream>
using namespace std;

/*Schreiben Sie eine Funktion int ggt(int a, int b),
 die den größten gemeinsamen Teiler der beiden natürlichen Zahlen a und b berechnet. 
 Verwenden Sie die Funktion zum Testen in einem Hauptprogramm, 
 das jeweils den Zähler und den Nenner eines Bruches einliest 
 und die gekürzte Version des Bruches ausgibt.*/


int ggT(int a, int b){
   if(b==0) return a;
   return ggT(b, a%b);
}


int main()
{
   cout << "Geben Sie Zaehler und Nenner ein, welche gekürzt werden sollen: " <<endl;
   int a, b; 
   while(cin >> a >> b){
      cout << a/ggT(a,b) << "/" << b/ggT(a,b) << endl;
   }
   return 0;
}