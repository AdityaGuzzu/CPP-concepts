/*  We will see what happens when we create new to create objects of classes which have
    constructors.
*/

#include<iostream>
using namespace std;
class base
{
    public:
    int x;
    base(int x): x(x) {cout<<endl<<"x = "<<x;}
    base() {cout<<"\nWelcome to Base class";}
};

int main()
{
    base *ptr;
    ptr = new base(5);      // can pass constructor arguments here (for parameterised).
    base *ptr2;
    ptr = new base;         // This will call the parameterised constructor.
}