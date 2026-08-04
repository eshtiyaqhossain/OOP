#include<iostream>
using namespace std;

class Book{
private:
    string title;
    string author;
    int price;
public:
    Book();
    Book(string t);
    Book(string t, string a);
    Book(string t,string a, int p);
    ~Book();

    void Display();
};

Book::Book(){
    title = "------";
    author ="------";
    price = 0;

}
Book::Book(string t){
     title = t;

}
Book::Book(string t, string a){
      title = t;
      author = a;

}
Book::Book(string t, string a,int p){
     title = t;
     author = a;
     price = p;

}
Book::~Book(){
     cout<<"destructor call for "<<title<<endl;

}
void Book::Display(){
     cout<<"Title:"<<title<<"\n"
     <<"Author: "<<author<<"\n"
     <<"Price:"<<price<<endl;
}
int main(){
Book b1;
Book b2("Himu","Humayun ahmed");
Book b3("C Programming","K&N King",500);
b1.Display();
b2.Display();
b3.Display();

return 0;

}
