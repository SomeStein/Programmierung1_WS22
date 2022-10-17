#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben sie drei Zahlen ein: ";
   int a, b, c;
   cin >> a;
   cin >> b;
   cin >> c;
   string res = to_string(c % 10) + to_string(b % 10) + to_string(a % 10);
   res = res + to_string(a / 10) + to_string(b / 10) + to_string(c / 10);

   cout << res;
   return 0;
}