# include <iostream>
# include <string>
using namespace std;

class Car{

string Brand;
string Model;
float Price;
int Mileage;
 
public:
Car  (string brand, string model, float price, int mileage){
    Brand=brand;
    Model=model;
    Price=price;
    Mileage=mileage;

}

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
Car car ("Toyota","Corolla",20000,5000);
        cout<<"the details are:"<<endl;
        car.display(); 
        car.drive(150);
        car.drive(300);
        return 0;


}