#include <iostream>
using namespace std;

int main() {
  int arbeiter, stueck, arbeiterFrage;
  cin >> arbeiter >> stueck >> arbeiterFrage;
  cout << (double) stueck/arbeiter*arbeiterFrage;
}
