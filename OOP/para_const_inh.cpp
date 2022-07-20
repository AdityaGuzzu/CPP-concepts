/* A program to demonstrate parameterised constructors using Inheritance. We will see what happens
   when the parent class has a parametierised constructor but the child class doesn't have any */
#include<iostream>
using namespace std;
class parent
{
    private:
    int x;
    public:
    parent(int x): x(x) {cout<<"\nHey, in Parent class. X = "<<x;}  //A parameterised constructor which sets the val of x
};

class child: public parent
{
    //Nothing in the child class
};

int main()
{
    child obj;      //This is illegal because the base class constructor will be called and there is nothing to feed the value required as a
}
