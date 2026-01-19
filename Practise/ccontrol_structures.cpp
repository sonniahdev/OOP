#include <iostream>
using namespace std;
int main(){
    int x=20;
    int y =35;
    if(20>18){
        cout<<"Good morning Njogu"<<"\n";
    }else if(20>40){
        cout<<"Hello";
    }else{
        cout<<"yolo!";
    }

    // nested if
if(x>10){
    cout<<"x is greater than 10"<<"\n";
}if(y>20){
cout<<"y is also greater than 20"<<"\n";
}
// nested if for checking if someone is eligible to vote
int age = 20;
bool isCitizen = true;

if (age >= 18) {
    cout<<"you are old enough to vote"<<"\n";
    if (isCitizen) {
        cout << "You are eligible to vote\n";
    } else {
        cout << "Must be a citizen to vote\n";
    }
} else {
    cout << "Not old enough to vote\n";
}


//logical operators in if statements

int a = 200;
int b = 33;
int c = 500;

if(a>b && c>a){
    cout<<"this is true"<<"\n";

}

//  real life scenario

bool isloggedin = true;
bool isadmin = false;
int securitylevel =3;

if(isloggedin && (isadmin || securitylevel<=2)){
    cout<<"Access granted"<<"\n";
}else{
    cout<<"Access denied"<<"\n";
}

// check if number is even or odd
 int num = 5;
 if(num % 2 == 0){
    cout<<"num is an even number"<<"\n";
 }else{
    cout<<"num is a odd number"<<"\n";
 }



    return 0;
}


/*
short hand if else
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;


Nested Ternary (Optional)

int time = 22;
string message = (time < 12) ? "Good morning."
  : (time < 18) ? "Good afternoon."
  : "Good evening.";
cout << message;

*/