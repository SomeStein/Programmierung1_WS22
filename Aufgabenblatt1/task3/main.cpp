#include<iostream>
#include<cmath>
using namespace std;

int main() {
   cout << "Bitte geben Sie einen Radius und Winkel für das Kreissegment ein: ";
   float radius, angle, angle_rad;
   cin >> radius;
   cin >> angle;
   angle_rad = 3.14159265*angle/360;
   cout << "Die Fläche des Kreissegmentes enstspricht " << radius*radius/2*(angle_rad*2 - sin(angle_rad));
}