#include<iostream>
using namespace std;
class base
{
    int x;
    public:
    base(int x): x(x) {cout<<endl<<"The value of x is :"<<x;}
    base() {cout<<endl<<"Welcome to base class";}
};

int main()
{
    //This is how we can create a pointr array of any user data type
    base *ptr[] =
    {
        new base(5),
        new base(7),
        new base(10),
        new base
    };

}