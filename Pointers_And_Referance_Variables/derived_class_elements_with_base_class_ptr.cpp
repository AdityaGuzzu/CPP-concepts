/*  In this file we'll see what happens when we pass a base class pointer to a function
    and try to access derived class elements */
#include<iostream>
using namespace std;
class base
{
    public:
    int x;

};

class derived: public base
{
    public:
    int y;
};

//void elem_acc(base *ptr)   
void elem_acc(base *ptr)          
{
    cout<<ptr->y;           //Shows an error because base *ptr is the argument and base class doesn't have y
                                
}

int main()
{
    void elem_acc(base *ptr);
    base *ptr;
    ptr = new derived;          //Assigning base class ptr to a derived class object
    elem_acc(ptr);              
}

/* Though we use the base class pointer to point towards derived class objects in a pointer
    array,we can't do that with functions because fucntions check if the arguments and 
    parameters are of the same type.
*/