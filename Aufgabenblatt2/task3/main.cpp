#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int a;
  cout << "Geben Sie eine Zahl ein: ";
  cin >> a;
  string str = to_string(a);
  int n = size(str);
  cout << "Die Zahl lautet umgekehrt ";
  for (int i = n-1; i >= 0; i--){
   cout << str[i];
  };
  cout << "\n";
}