#include <iostream>
#include <string>
#include <math.h>
using namespace std;




class Cylinder{
    public:
    int r;
    int h;

   
    double surface_area(){
    return 2 * M_PI * r * (r + h);
}

   

    double volume(){
    return M_PI * r * r * h;
}

     Cylinder(int radius, int height){
        r=radius;
        h=height;

    };

};

int main(){
    
Cylinder c(2, 6);
cout << c.volume()<<endl;
cout << c.surface_area()<<endl;
   return 0;
}