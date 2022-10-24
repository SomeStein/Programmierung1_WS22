#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   cout << "Bitte geben Sie FAssungsvermögen und Bestellmenge in Liter an: ";
   int n; 
   double amount;
   cin >> n >> amount;
   cout << "Es werden " << ceil(amount/n) << " Fässer benötigt";
}