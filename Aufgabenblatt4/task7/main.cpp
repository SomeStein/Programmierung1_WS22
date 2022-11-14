#include <iostream>
using namespace std;

/*Überprüfen Sie, ob die Folge
ni+1​=ni​/2 für gerade ni​
ni+1​=3ni​+1 für ungerade ni​
für unterschiedliche (beliebige) positive Startwerte n0
​immer den Wert 1 erreicht.*/

int rec(unsigned long n, int stop, int current)
{

   if (current >= stop)
   {
      cout << "breakout durch Rekursionstiefe";
      return 0;
   }

   if (n == 1)
   {
      return 1;
   }
   unsigned long next_n;
   n % 2 == 0 ? next_n = (n / 2) : next_n = (3 * n + 1)/2;
   return rec(next_n, stop, current + 1);
}

//gos through every number as starting value until it has a breakout
int main()
{
   int i = 100000;
   while(rec(i,100000,1)){
      if (i % 100000 == 0){
         cout << i << endl;
      }
      i++;
   }
   return 0;
}