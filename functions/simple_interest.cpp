#include <iostream>
#include <math.h>
using namespace std;

float interest(float principle,float rate,int time){
    return principle * rate/100 *time;
}
float compound(float P, float r, float n, float t){
    return P * pow((1 + (r /100)/ n), (n * t));
}

int main(){
float rate;
float principle;
int time;
float n; // n is the frequency
int choice;
char again;

// for compound you donot have to reinitialize as you had already done so in simple interest here
do{

cout<<"welcome to your interest calculator:"<<"\n";
cout<<"option 1: simple interest calculator"<<"\n";
cout<<"option 2 : Compound interest calculator"<<"\n";
cout<<"Enter your choice"<<"\n";

cin>>choice;

if(choice==1){
    cout<<"Enter principle"<<"\n";
    cin>>principle;

    
cout<<"enter rate"<<"\n";
cin>>rate;

cout<<"enter time"<<"\n";
cin>>time;

cout<<"your interst is:"<<interest(principle,rate,time)<<"\n";


}else if(choice==2){
cout<<"enter the principle"<<"\n";
cin>>principle;

cout<<"enter rate"<<"\n";
cin>>rate;

cout<<"enter time"<<"\n";
cin>>time;

cout<<"Enter the frequency"<<"\n";
cin>>n;

cout<<"Your compound interest is:"<<compound(principle,rate,n,time)<<"\n"; // when you enter the values here they should be in the same order as the one that you used in the function.

}else{
    cout<<"Please select one of the choices above"<<"\n";
}
cout<<"do you want to perform another calculation?(y\n)"<<"\n";
cin>>again;

}while(again=='y'|| again=='y');{
    cout<<"See you again"<<"\n";
}





// for compound

return 0;
}