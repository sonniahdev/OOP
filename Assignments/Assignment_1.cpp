# include <iostream>
# include <string>
using namespace std;

class Car{

string Brand;
string Model;
float Price;
int Mileage;
 
public: //access modifier
//constructor has same name as class 
// initializes objects
Car  (string brand, string model, float price, int mileage){

    Brand=brand;
    Model=model;
    Price=price;
    Mileage=mileage;

}

// destructor
~Car(){
    cout<<"the cars have been destroyed"<<endl;
    cout<<Brand<<endl<<Model<<endl;
}
// function to display
void display(){
    cout<<"brand:"<<Brand<<endl;
    cout << "Model: " << Model << endl;
    cout << "Price: $" << Price << endl;
    cout << "Mileage: " << Mileage << " miles" << endl;
}
void drive(int distance){

Mileage += distance;
cout << "Updated mileage: " << Mileage << " miles" << endl;

}

};



int main(){
    // car(with small letter ) is the object
Car car ("Toyota","Corolla",20000,5000);
 cout<<"the details for first car are:"<<endl;
        car.display(); 
        car.drive(150);
        car.drive(300);
Car car1 ("Volvo","Corolla",3000,7000);
        cout<<"the details for second car  are:"<<endl;
        car1.display(); 
        car1.drive(150);
        car1.drive(300);
        return 0;


}