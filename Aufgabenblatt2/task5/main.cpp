#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   cout << "Bitte geben Sie die Koordinaten zweier Punkte im R3 an: ";
   double x1,x2,x3,y1,y2,y3,dist;
   cin >>x1>>x2>>x3>>y1>>y2>>y3;
   dist = sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2)+(x3-y3)*(x3-y3));
   cout << "Die Distanz der Beiden gegebenen Punkte beträgt " << dist;
   return 0;
}