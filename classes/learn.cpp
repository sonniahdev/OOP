#include <iostream>
#include <string>
using namespace std;

class Employee{
    //encapsulation
string Department;
string Supervisor;
int Id;
    public: //access modifier
//adding members to this class (they will be their attributes and behavour)
string Name;
string Company;
int Age;

//creating getters and setters for the encapsulated data

//setter
void setDepartment(string department){
    Department=department;
}
// create the getter

string getDepartment(){
    return Department;
}



//setter
void setSupervisor(string supervisor){
    Supervisor=supervisor;
}
// create the getter

string getSupervisor(){
    return Supervisor;
}


//setter
void setId(int id){
    Id=id;
}
// create the getter

int getId(){
    return Id;
}

//this is a class method that represents a behaviour

void selfintro(){
    cout<<"Name -"<<Name<<"\n";
    cout<<"Company-"<<Company<<endl;
    cout<<"Age-"<<Age<<endl;
    cout<<"Department -"<<Department<<"\n";
    cout<<"Supervisor-"<<Supervisor<<endl;
    cout<<"Id-"<<Id<<endl;


}
//constructor
Employee(string name, string company, int age,string department, 
    string supervisor, int id){
Name=name;
Company=company;
Age=age;
Department=department;
Supervisor=supervisor;
Id=id;
}


};

int main(){
// employee1 is an object of the class employee
Employee employee1=Employee("Njogu","stawitech",23,"tech","james",1);  // CONTRUCT THE OBJECT
employee1.selfintro(); // INTRODUCE THE USER

Employee employee2=Employee("kimathi","njeree",22,"HR","Kilele",2);
employee2.selfintro();

//testing the getters and setters

employee1.setId(1);
cout<<employee1.getDepartment()<<"is-"<<""<<employee1.getId()<<"is id number "<<endl;


//now access the attributes of the class
// without constructor
/*
employee1.Name="Njogu";
employee1.Age=21;
employee1.company="Stawitech";
employee1.selfintro();


employee2.Age=21;
employee2.company="manji";
employee2.Name="kioko";
employee2.selfintro();
*/
}




/*
rules of contructor:
1. they donot have a retun type
2. they must have same name as their class
3. they are public



modifiers we have :
private
public
protected

*/