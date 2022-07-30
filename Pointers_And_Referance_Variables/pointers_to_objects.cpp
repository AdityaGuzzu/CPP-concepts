/* In this file, the way of pointing to objects will be shown */
#include<iostream>
using namespace std;
class test
{
    int x;
    public:
    void show(int a) 
    {
        x = a;
        cout<<endl<<a;
    }
};

int main()
{
    test obj;
    test *ptr;  //A pointer of type test. I.E it can point towards instances of test
    ptr = &obj; //Assigning the address of obj to ptr
    ptr->show(5);   //We can use the arrow or member selection operator to call the member variables and functions
    (*ptr).show(8);  //This is perfectly valid   
}