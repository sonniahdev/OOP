# include <iostream>
# include <string>

using namespace std;

class Person{
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

class LibraryMember: public Person{
    private:
    int MemberId;
    int BooksBorrowed;
    public:
LibraryMember(string name, int mid, int bb):Person(){
Name=name;
MemberId=mid;
BooksBorrowed=bb;

}
int getMemberid(){
    return MemberId;
}
int getBooksBorrowed(){
    return BooksBorrowed;
}

};


class PremiumMember: public LibraryMember{
    private:
    double MembershipFee;
    public:
    PremiumMember(string name, int mid, int bb, double mf):LibraryMember( name,  mid,  bb){
MembershipFee=mf;
    }
int getMembershipFee(){
    return MembershipFee;
}

};

int main (){
cout<<"Normal Members"<<endl;
LibraryMember lm("Bob", 101, 3);
    cout << "LibraryMember name: " << lm.getName() << endl;
    cout << "LibraryMember ID: " << lm.getMemberid() << endl;
    cout << "Books borrowed: " << lm.getBooksBorrowed() << endl;
cout<<"";
    cout<<"Premium Members"<<endl;

PremiumMember pm("Eunice",12,2,700);
cout << "PremiumMember name: " << pm.getName() << endl;
    cout << "PremiumMember ID: " << pm.getMemberid() << endl;
    cout << "Books borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership fee: " << pm.getMembershipFee() << endl;}