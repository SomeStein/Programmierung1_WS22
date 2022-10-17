#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben sie drei Zahlen ein: ";
   int a, b, c;
   cin >> a;
   cin >> b;
   cin >> c;
   string res = to_string(c%10) + to_string(b%10) + to_string(a%10);
   res = res + to_string(a/10) + to_string(b/10) + to_string(c/10);
   // + a.substr(0, a.length() - 1)
   // + b.substr(0, b.length() - 1)
   // + c.substr(0, c.length() - 1);

   cout << res;
   return 0;
}