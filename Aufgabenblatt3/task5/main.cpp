#include <iostream>
using namespace std;

/*Erstellen Sie die Additionstabelle und die Multiplikationstabelle modulo n.
 Die Ausgabe für n=4 könnte zum Beispiel so aussehen:

Addition

0 	  	1 	  	2 	  	3
1 		2 		3 		0
2 		3 		0 		1
3 		0 		1 		2



Multiplikation

0 	  	0 	  	0 	  	0
0 		1 		2 		3
0 		2 		0 		2
0 		3 		2 		1*/

void Table(int n, string operation)
{

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (operation == "add")
         {
            cout << (i + j) % n << " ";
         }
         if (operation == "mult")
         {
            cout << (i * j) % n << " ";
         }
      }
      cout << endl;
   }
   cout << endl;
}

int main()
{
   int n;
   cin >> n;
   cout << endl;

   Table(n, "add");
   Table(n, "mult");

   return 0;
}