#include <iostream>
using namespace std;

int main()
{
   cout << "Geben Sie zwei ganze Zahlen ein: ";
   int a,b; cin >> a >> b; 
   if ( a%b == 0){
      cout << b << " teilt " << a ;
   }
   else {
      cout << b << " teilt " << a << " nicht ";
   };
   return 0;
}