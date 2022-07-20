/*A program to see what happens if the base class has a parameterised constructor
  and the child class also has a constructor which feeds the parameterr value to
  the base class */

#include<iostream>
using namespace std;
class parent
{
    private:
    int x;
    public:
    parent(int y): x(y) {cout<<"Welcome to the parent class\n";}      //parent class constructor
    parent(){cout<<"Hello, Welcome to def const parent\n";}
};

class child: public parent
{
    public:
    child(int x)                                 //Child class constructor
    {
                                                //Calling the parent class constructor
        cout<<"Welcome to child class\n";
        parent(5);                              //Giving parameter value to base class constructor 
    }
};

int main()
{
    child obj(5);
}