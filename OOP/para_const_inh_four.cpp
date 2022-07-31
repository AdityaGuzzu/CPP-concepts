/*  We'll see what happens when a base class has a parameterised and a default constructor
    and a derived class has no constructors.
*/
#include<iostream>
using namespace std;
class base
{
    private:
    int x;
    public:
    base(int x): x(x) {}
    base() {cout<<endl<<"Welcome to Base class";}
};

class derived: public base
{
    //empty
};

int main()
{
    derived obj;            //perfectly valid. Default constructor will be called instead of parameterized one in the base class
}