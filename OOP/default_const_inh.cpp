/*A program to demonstrate default constructors in inheritance*/
#include<iostream>
using namespace std;
class parent
{
    public:
    parent() {cout<<"\nWelcome to Parent class";}       //Parent class constructor
};

class child: public parent
{
   
    public:
    child() {cout<<endl<<"Welcome to child class";}     //child class constructor
};

int main()
{
    child obj;                                          //Object created 
}