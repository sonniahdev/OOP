# include <iostream>
# include <string>

using namespace std;
class Student{
    private:
    int Age;

    public:
   void setAge(int age){
Age=age;
    }
   int getAge(){
    return Age;
   } 
   
};



int main(){
Student student1;
student1.setAge(20);
cout<<student1.getAge();

}