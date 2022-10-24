#include <iostream>
#include <string>
using namespace std;
/*Schreiben Sie ein Programm, das eine dreistellige Zahl einliest
 und mit Hilfe der Ziffernsumme überprüft,
 ob die eingegebene Zahl durch 3 teilbar ist.*/


int digit_sum(int num){
   string str;
   str = to_string(num);
   int n = size(str);
   int sum = 0;
   for (int i = 0; i < n; i++){
      sum += int(str[i])-48;
   };
   if (sum > 9){
      sum = digit_sum(sum);
   };
   return sum;

}

int main()
{
   int a; 
   int b;
   cout << "Geben Sie eine natürliche Zahl ein: ";
   cin >> a;
   b = digit_sum(a);
   if (b == 3 || b == 6 || b == 9  ){
      cout << a << " is divisible by 3";
   }
   else{
      cout << a << " is not divisible by 3";
   };

   return 0;
}