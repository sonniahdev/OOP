# include <iostream>
# include <string>

using namespace std;

class Accountholder{
protected:
string Name;

public:
void setName(string n){
    Name=n;
}
string getName(){
    return Name;
}

};

class BankAccount: public Accountholder{
private:
int AccountNumber;
double Balance;

public:
BankAccount(string name, int acc, double bal) :Accountholder(){
    Name=name;
    AccountNumber=acc;
    Balance=bal;
}

int getAccountNumber(){
return AccountNumber;
}

double getBalance(){
return Balance;
}

};
class SavingsAccount: public BankAccount{
private:
double InterestRate;
public:

 SavingsAccount (string name, int acc, double bal, double inter): BankAccount( name,  acc,  bal){
 InterestRate=inter;

}
double getinteret(){
    return InterestRate;
}

};

int main(){
//Accountholder account1;
//account1.setName("Njogu");
//cout<<"The name is :"<<account1.getName();
SavingsAccount s("Njogu",132578,7894,7);
cout<<"the account name is:"<<s.getName()<<endl<<"the account is :"<<s.getAccountNumber()<<endl<<"the balance is :"<<s.getBalance()<<endl<<"the rate is:"<<s.getinteret();
}