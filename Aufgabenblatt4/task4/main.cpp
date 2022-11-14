#include <iostream>
using namespace std;

/*Berechnen Sie die Fakultät von n (n!) mit Hilfe einer Schleife.*/

int main() {
  int n,N;
  cin >> n;
  for(int i = n-1; i > 0; i-- ){
    n*=i; 
  }
  cout << n;
}
