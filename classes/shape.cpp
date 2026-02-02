# include <iostream>
# include <string>
# include <math.h>
using namespace std;

// this is the base class
class Shape{
    protected:
    string Colour;
public:
// colour setter
    void setColour(string c){
Colour=c;
    }
    // colour getter
  string  getColour(){
return Colour;
    }
};
// derived class rectangle
    class Rectangle:public Shape{

float Length;
float Width;

public:
// the derived class constructor
Rectangle (float length, float width, string colour){
    Length=length;
    Width=width;
    Colour=colour;
}
// function to get the area
float area(){
   return Length*Width;
}
};
// the derived class circle
class Circle: public Shape{
    float radius;
    public:
    // the constructor of the derived class circle
    Circle(float r, string colour){
        radius=r;
        Colour=colour;
    }
    // the function to get it`s area
    float area(){
        return M_PI *radius*radius;
    }
};

int main(){
Rectangle rectangle(10,5,"Red");
cout<<"The  colour of the rectangle is :"<<rectangle.getColour()<<endl;
cout<<""<<endl;
// note that in the main when we use cout we say object.function()
cout<<"The  area of the rectangle is :"<<rectangle.area()<<endl;
cout<<""<<endl;

Circle circle(7,"Blue");
cout<<"The  colourof the circle is :"<<circle.getColour()<<endl;
cout<<""<<endl;

cout<<"The  area of the circleis :"<<circle.area()<<endl;

return 0;
}