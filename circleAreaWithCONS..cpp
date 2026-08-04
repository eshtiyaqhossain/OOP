//CONS = Constructor.
#include<iostream>
using namespace std;
class circle
{
private:

    float radius;

public:
    circle (float r)
    {
        radius = r;
    }

    float area ()
    {
        return 3.1416*radius*radius;
    }
    float circumference()
    {
        return 2*3.1416*radius;
    }

    void displayProperties()
    {

        cout<<"redius :"<<radius<<endl;
        cout<<"Area:"<<area()<<endl;
        cout<<"circumference:"<< circumference()<<endl;
        cout<<"----------------------------------------"<<endl;

    }
};

int main()
{

    circle c1(5.5);
    circle c2(6.5);

    c1.displayProperties();
    c2.displayProperties();

    return 0;

}
