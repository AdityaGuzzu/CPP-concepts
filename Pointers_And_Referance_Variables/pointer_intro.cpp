/*  An Introduction to pointers:
    DEFINITION:
    A pointer is a variable which stores the address of another variable.
*/

#include<iostream>
using namespace std;
int main()
{
    char x;
    char *ptr;      //the '*' (asterick) before 'ptr' represents the pointer variable
    ptr = &x;       //the '&' (ampersand) before 'x' is used to denote the address. So &x can be read as 'address of x'
    cout<<"The address of x is "<<(int)ptr;
    cout<<"\nThe value at the address held by ptr is "<<*ptr; //* is also used as the dereference operator which can be used to find the value at an address

}