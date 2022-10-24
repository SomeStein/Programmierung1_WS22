#include <iostream>
using namespace std;
/*Schreiben Sie ein Programm, das zwei natürliche Zahlen m und n einliest 
und die n-te Ziffer der Zahl m ausgibt. Z.B.: m=1358 n=2 Ausgabe: 5 
(Die Ziffern werden ausgehend vom Dezimalpunkt gezählt.)
*/
int main()
{
   double m;
   int n;
   cin >> m;
   cin >> n;
   string b = to_string(m) ;
   cout << b[n];

}