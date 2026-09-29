#include<iostream>
using namespace std;

class Book
{
    string title;
    string author;
    float price;

public:

    void setTitle(string t)
    {
        title = t;
    }
    void setAuthor(string a)
    {
        author = a;
    }
    void setPrice(float p)
    {
        price = p;
    }


    string getTitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }
    float getPrice()
    {
        return price;
    }

    float ApplyDiscount(float d)
    {
        float discount = d*price/100;
        price = -discount;
        return price;
    }

};


int main()
{
    Book b1;
    b1.setTitle("C++ Programming");
    b1.setAuthor("Bjarne Stroustrup");
    b1.setPrice(500.00);

    cout<<"Book Title:"<<b1.getTitle()<<endl;
    cout<<"Book Author:"<<b1.getAuthor()<<endl;
    cout<<"Original Price:"<<b1.getPrice()<<endl;

    float discountPercent = 10.0;
    b1.ApplyDiscount(discountPercent);

    cout<<"Price after:"<<discountPercent<<"% discount:"<<b1.getPrice()<<"Tk"<<endl;

    return 0;
}
