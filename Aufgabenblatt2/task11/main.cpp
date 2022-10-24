#include <iostream>
using namespace std;

int main() {

int i,count;
string checkint;
double num;
cin >> num;
checkint = to_string(num);

for (i = 0; i < checkint.length(); i++) {

if (isdigit(checkint[i]) == false) {
   if(checkint[i+1] != '0'){
      count=1;
      break;
   }

} else
count=0;

}

if(count==0)
cout << " Eine ganze Zahl";
else
cout << " Keine ganze Zahl";
}
