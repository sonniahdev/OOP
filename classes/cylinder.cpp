#include <iostream>
#include <string>
#include <math.h>
using namespace std;




class Cylinder{
    int r;
    int h;


     public:

     Cylinder(int radius, int height){
        r=radius;
        h=height;

    }
   

   
   
    double surface_area(){
    return 2 * M_PI * r * (r + h);
}

   

    double volume(){
    return M_PI * r * r * h;
}
  // destructor 
  ~Cylinder(){
        cout<<"testing:"<<endl;
     }

};



int main(){
    Cylinder cylinder(2,6);
cout << cylinder.volume() << endl;
cout << cylinder.surface_area() << endl;
    Cylinder cylinder1(3,7);
 cout << cylinder1.volume() << endl;
cout << cylinder1.surface_area() << endl;


   return 0;
}