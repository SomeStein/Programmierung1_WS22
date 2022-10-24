#include<iostream>
using namespace std;

int main() {
   cout << "Geben Sie den Betrag und die benötigten Versuche ein: ";
   double amount;
   int num;
   cin >> amount >> num;
   cout << "Gewinn liegt bei " << amount*35 << " Verlust lieght bei " << amount*num;
   cout << " unterm STrich also " << amount*(35-num);
   return 0;
}