
#include <iostream>
#include <string>
using namespace std;

/*Schreiben Sie eine Funktion bool intTest(int n, char c), 
die prüft, ob die Ziffer c in der Zahl n vorkommt.*/

bool intTest(int n, char c){
   string digits = to_string(n);
   int len = digits.length();
   for (int i = 0; i < len; i++){
      if(digits[i] == c){
         return true;
      }
   }
   return false;
}

int main()
{
   cout << "Geben Sie eine Zahl und eine Ziffer ein: " << endl;
   int n; char c;
   while(cin >> n >> c){
      string bool_val; 
      intTest(n,c)? bool_val = " ist in " : bool_val = " ist nicht in ";

      cout << c << bool_val << n << endl;
   }
   return 0;
}