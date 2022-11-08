#include <iostream>
using namespace std;

/*Lesen Sie 2 Intervallgrenzen und danach beliebig viele Zahlen 
(Abschluss mit EOF) ein, und geben Sie aus, 
wie viele Zahlen kleiner als die untere Intervallgrenze,
wie viele im Intervall und wie viele größer als die obere Intervallgrenze waren.*/

int main()
{
   double a,b,current,greater,smaller,mid;
   cout << "Geben Sie zwei Intervallgrenzen an dann die Zahlen die gezaehlt werden sollen fuer bestaeigung buchstaben eingeben: ";
   greater = 0;
   smaller = 0;
   mid = 0;

   cin >> a >> b;

   if(a > b){
      double temp = a;
      a = b;
      b = temp;
   }

   while(cin >> current){
      if(current < a){
         smaller ++;
      }
      else if(current > b){
         greater++;
      }
      else{
         mid ++;
      }
   }

   cout << "kleiner: " << smaller << endl;
   cout << "innerhalb: " << mid << endl;
   cout << "groesser: " << greater << endl;

   return 0;
}