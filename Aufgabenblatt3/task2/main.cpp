#include <iostream>
#include <string>
using namespace std;

/*Schreiben Sie ein Programm, das eine vierstellige ganze Zahl einliest und ihre sprachliche Repräsentation ausgibt.
Z. B. Eingabe 1723 Ausgabe eins-sieben-zwei-drei.*/


int main()
{

   string words[10] =  {"null","eins","zwei","drei","vier","fuenf","sechs","sieben","acht","neun"};
   unsigned int num;
   cout << "Geben Sie eine natürliche, vierstellige Zahl ein: ";
   cin >> num;
   string num_str = to_string(num);
   int num_size = num_str.size();
   
   for(int i = 0; i < num_size; i++){
      if(i > 0){cout << "-";};
      cout << words[(int) num_str[i]-48];
   };
   cout << endl;
   
   return 0;
}