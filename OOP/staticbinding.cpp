/* A program to demonstrate static polymorphism */
#include<iostream>
using namespace std;
class parent
{
    public:
    void welcome() {cout<<endl<<"Welcome to parent class";}   
};

class child: public parent
{
    public:
    void welcome() {cout<<endl<<"Welcome to child class";}
};

int main()
{
    parent *ptr[] = 
    {
        new parent,
        new child
    };
    ptr[0]->welcome();      //parent class' function
    ptr[1]->welcome();      //child class' function. We see that the function defined
                            //   in child class isn't called
}