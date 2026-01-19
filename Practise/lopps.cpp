#include <iostream>
using namespace std;

int main(){
    // while loops
    int i = 0;
    while(i<5){
        cout<<i<<"\n";
                i++;

    }

    int countdown = 3;
    while(countdown>0){
        cout<<countdown<<"\n";
        countdown--;
    }
    cout<<"happy new year"<<"\n";

//program that only print even numbers between 0 and 10

int k =0;
while(k<=10){
    cout<<k<<"\n";
    k+=2;
}

int dice = 1;
while(dice<=6){
if(dice<6){
    cout<<"no yatzy"<<"\n";
}else{
    cout<<"yatzy"<<"\n";
}
dice = dice+1;
}

// do while loops
//The do/while loop is a variant of the while loop. 
//This loop will execute the code block once, before checking if the condition is true.
// Then it will repeat the loop as long as the condition is true.
int j = 0;
do{
    cout<<j<<"\n";
    j++;
}while(j<5);


// to get some of numbers
int sum =0;
for(int t = 1; t<=5; t++){
    sum = sum+t;
}
cout<<"sum is:"<<sum<<"\n";

// nested loops

// Outer loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}

// for each loop
int num2[5]={10,20,30,40,50};
for(int num1:num2){
    cout<<num1<<"\n";
}

// user input

int num;
do{
    cout<<"enter a possitive number:"<<"\n";
    cin>>num;

}while(num>0);
    return 0;
// for loops

// When you know exactly how many times you want to loop through a block of code, 
//use the for loop instead of a while loop:

for(int s=0; s<5; s++){
    cout<<s<<"\n";
}


/*int i = 0;
while (i < 10) {
  cout << i << "\n";
  i++;
  if (i == 4) {
    break;
  }
} */


/*
int i = 0;
while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
} 
*/

return 0;
}