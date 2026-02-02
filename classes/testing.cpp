# include <iostream>

using namespace std;
class MyClass{
    public:
    MyClass(){
        cout<<"Hello world!"<<endl;
    }
    ~MyClass(){
cout<<"trying this out:"<<endl;
    }
};
int main(){
    MyClass myobj;
    cout<<"will you work now??"<<endl;
    return 0;
};

// types of constructors
// you can have constructor outside the class:
// eg use MyClass::MyClass(string brand, string model, float price, int mileage){

  //  Brand=brand;
    //Model=model;
    //Price=price;
    //Mileage=mileage;

//}

// destructor runs when an object is destroyed
