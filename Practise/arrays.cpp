#include <iostream>
using namespace std;
int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
     cars[0] = "Opel";
cout << cars[0];

// Create an array of strings
string car[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << cars[i] << "\n";
}
 return 0;
}