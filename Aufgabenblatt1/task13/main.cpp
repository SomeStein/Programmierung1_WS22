#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben sie drei Zahlen ein: ";
   string a, b, c;
   cin >> a;
   cin >> b;
   cin >> c;
   string res;
   res = c[c.length() - 1] + b[b.length() - 1] + a[a.length() - 1];
   // + a.substr(0, a.length() - 1)
   // + b.substr(0, b.length() - 1)
   // + c.substr(0, c.length() - 1);

   cout << res;
   return 0;
}