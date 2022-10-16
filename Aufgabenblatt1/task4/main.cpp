#include<iostream>
using namespace std;


int main() {
   cout << "Bitte geben Sie einen Radius und Winkel für den Kreissektor ein: ";
   float radius, angle, angle_rad;
   cin >> radius;
   cin >> angle;
   angle_rad = 3.14159265*angle/360;
   cout << "Die Fläche des Kreissektors enstspricht " << radius*radius*angle_rad;
}
