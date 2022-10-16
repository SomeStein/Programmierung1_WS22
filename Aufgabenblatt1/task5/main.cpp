#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben Sie die Gradzahl in Celsius an: ";
   float temperature;
   cin >> temperature;
   cout << "Das entsprechen " << temperature * 9 / 5 + 32 << " grad Fahrenheit";
   return 0;
}