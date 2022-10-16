#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben sie eine natürliche Zahl n ein, für die die Summe aller ersten n natürlichen Zahlen berechnet werden soll: ";
   int n;
   cin >> n; 
   cout << "Zum vergleich eingesetzt in die Gauß'sche Summenformel erhalten wir: " << n*(n+1)/2 << endl;
   int a = 0;
   
   while (n > 0)
   {
      a = a + n;
      n --;
   };

   cout << "Das Ergebnis lautet: " << a;
   
   return 0;
}