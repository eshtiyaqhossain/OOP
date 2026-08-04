//The code that works in C++ is the normal constructor overhead (parent to child) in the case of inheritance.
#include<iostream>
using namespace std;
class A{ //base class A (parent)
public:
    A(){cout<<"A"<<endl;}
};
class B:public A{ //Derived class B (child)
public:
    B(){cout<<"B"<<endl;}
};
class C{
public:
    C(){cout<<"C"<<endl;}
};
class D:public C{
public:
    D(){cout<<"D"<<endl;}
};
int main(){
B objB;
D objD;
return 0;
}
/*যখন কোনো চাইল্ড ক্লাসের অবজেক্ট তৈরি করা হয়, তখন প্রথমে তার প্যারেন্ট ক্লাসের কনস্ট্রাকটর কল হয়,
তারপর চাইল্ড ক্লাসের নিজস্ব কনস্ট্রাকটর কল হয়*/
