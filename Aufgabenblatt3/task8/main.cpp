#include<iostream>
using namespace std;

/*Bestimmen Sie den Wert 11+22+33+,…,+nn für eine beliebige natürliche Zahl n.
Die Verwendung von mathematischen Funktionen (wie z.B. pow aus cmath) ist nicht erlaubt.*/

int main() {
   int n, res;
   res = 0;
   cin >> n; 
   for (int i = 0; i < n; i++ ){
      res+= i*i;
   }
    cout << res; 
   return 0;
}