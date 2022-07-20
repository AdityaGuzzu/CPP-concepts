/*A program to demonstrate abstract base class */
#include<iostream>
using namespace std;
class parent
{
    int x;
    public:
    virtual void hello() = 0;   //pure virtual function
};

class child: public parent     //Child class of parent
{
    public:
    void hello()                //Overriding the hello function of base class
    {
        cout<<"\nHello";
    }

};

int main()
{
    parent obj;     //This is illegal because base class has a pure virtual function..
    child obj2;
    obj2.hello();
}