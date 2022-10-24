#include<iostream>
using namespace std;

int main() {
   cout << "Geben Sie eine Anzahl an Sekunden an: ";
   int s; cin >> s; 
   int years = s/(365*24*60*60);
   s = s%(365*24*60*60);
   int days = s/(24*60*60);
   s = s%(24*60*60);
   int hours = s/(60*60);
   s = s%(60*60);
   int minutes = s/60;
   s= s%60;
   int seconds = s;
   
   cout << years << " Jahre ";
   cout << days << " Tage ";
   cout << hours << " Stunden ";
   cout << minutes << " Minuten ";
   cout << seconds << " Sekunden ";

   return 0;
}