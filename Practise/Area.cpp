#include <iostream>
using namespace std;
int main(){
    //without user input
    int width=4;
    int length=6;
    int area=width*length;
    cout<<"the area of the rectangle is:"<<area<<"\n";
    
    // with user input

   int width;
   int lenth;

    cout<<"enter the width: "<<"\n";
    cin>>width;

    cout<<"enter the lenght: "<<"\n";
    cin>>lenth;

   int area=width*lenth;

    cout<<"the area is: "<<area<<"\n";
    return 0;
}