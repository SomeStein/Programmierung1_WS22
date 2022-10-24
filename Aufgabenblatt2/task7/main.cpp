#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben Sie die Währung und den umzurechnenden Betrag ein: ";
   char curr; float amount;
   cin >> curr >> amount; 
   if(curr == '$'){
      cout << "Der eingegebene Betrag entspricht " << amount*0.9721 << "€";
   }
   else {
      cout << "Der eingegebene Betrag entspricht " << amount*1.0287 << "$";
   }
   return 0;
}