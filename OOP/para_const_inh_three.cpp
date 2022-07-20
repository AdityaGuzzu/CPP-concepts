/*A program to try see what happens when base class has doesn't have a constructor but a derived class does*/
#include<iostream>
using namespace std;
class parent
{
    //Just leave this empty
};

class child: public parent
{
    public:
    child()                     //Child class constructor
    {
        cout<<"Hello World";
    }
};  

int main()
{
    child obj;                   //Its perfectly legal
}

