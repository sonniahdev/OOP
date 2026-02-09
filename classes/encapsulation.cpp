
# include <iostream>
# include <string>

using namespace std;


class Employee{
    private:
    int Salary;
    public:
    // sets the value
    void setSalary(int s){
Salary=s;
    }
    // gets the value
    int getSalary(){
        return Salary;
    }


};
int main (){

    Employee employee1;
    // here we assign a value 
    employee1.setSalary(12000);
    // here we print the value
    cout<<"your salary is :"<<employee1.getSalary()<<endl;
}


// IN ENCAPSULATION WE USE THE GETTERS AND SETTERS