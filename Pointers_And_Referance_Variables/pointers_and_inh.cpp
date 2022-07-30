/*  I will try to solve a problem I encountered in Business Simulation project.
    We have a set of pointers objects of base and derived class objects within an
    array. But we need the base and derived class objects separately to pass as function 
    arguments etc.
*/

#include<iostream>
using namespace std;

class A
{
    public:
    void welcomeA() {cout<<"\n Welcome to class A";}
};

class B: public A
{
    public:
    void welcomeB() {cout<<"\n Welcome to class B";}
};

int main()
{
    A obj;
    B obj2; 
    A *ptr[2] = {&obj, &obj2};  //We can assign the address of the derived class to base class pointer
    ptr[1]->welcomeA();     //We cannot access welcomeB using pointer of type A because welcomeB is exclusive to class B
    
}