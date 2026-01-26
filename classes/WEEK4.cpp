#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
int Age ;
double Salary;
char Name;

//setter 
void setAge(int age){
Age=age;
};

//getter
int getAge(){
    return Age;
}

//setter 
void setSalary(int salary){
Salary=salary;
};

//getter
int getSalary(){
    return Salary;
};

//setter 
void setName(char name){
Name=name;
};

//getter
int getName(){
    return Name;
}

double getoutput(){
    cout<<"my name is :"<<Name<<endl;
    cout<<"Age:"<<Age<<endl;
    cout<<"Salary"<<Salary<<endl;

};
// constructor

Employee(int age, char name, double salary){
    Age=age;
    Name=name;
    Salary=salary;

};

double calculate_salary(){
cout<<"your salary is :"<<Salary<<endl;
cout<<"your age is :"<<Age<<endl;
};

double commision(){
cout<<"your commision is :"<<endl;
};



};

int main(){
    Employee employee1=Employee( 21, 35000, "Njogu");
    employee1.getoutput();
    return 0;

}