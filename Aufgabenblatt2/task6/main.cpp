#include <iostream>
using namespace std;

double horner(double coef[3] ,double x){
   return (coef[2]*x+coef[1])*x +coef[0];
}

int main()
{
   double a,b,c;
   cout << "Geben Sie die Koeffiozienten des Polynoms ein: ";
   double coef[3];
   cin >> coef[0] >> coef[1] >> coef[2];
   cout << "Geben Sie die zu berechnende x-Stelle ein: ";
   double x;
   cin >> x; 
   cout << "Das angegebene Polynom hat an der Stelle " << x ;
   cout << " den Wert " << horner(coef,x);
   
   return 0;
}