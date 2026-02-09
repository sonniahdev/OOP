// without constructors
# include <iostream>
# include <string>

using namespace std;

class Book{
    public:
    string Title;
    string Author;
    int Year;

    // method inside a class

    void greetings(){
        cout<<"the books are here !!"<<endl;
    }
    // declare the method here
void methodoutsideclass();
};
void Book :: methodoutsideclass(){
    cout<<"did it work ??"<<endl;
}

// method outside a class
int main(){
    Book book1;
    book1.Title="Chozi";
    book1.Author="kiki";
    book1.Year=1999;
    book1.greetings();
    book1.methodoutsideclass();
    cout<<book1.Author<<endl<<book1.Title<<endl<<book1.Year<<endl;
}