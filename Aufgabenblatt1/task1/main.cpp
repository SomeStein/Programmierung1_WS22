#include <iostream>
using namespace std;

int main()
{
   cout << "Bitte geben Sie eine Länge und Breite für das Rechteck ein: ";
   float length, width;
   cin >> length;
   cin >> width;
   cout << "Der Umfang des Rechtecks mit Länge " << length << " und Breite " << width;
   cout << " beträgt " << 2 * width + 2 * length << " und die Fläche entspricht " << length * width;
   return 0;
}