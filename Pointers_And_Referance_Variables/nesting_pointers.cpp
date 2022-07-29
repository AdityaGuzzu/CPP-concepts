/*  This file contains the method to nest pointers */
#include<iostream>
using namespace std;
int main()
{
    int x=10;           //normal variable
    int *ptr;           //A pointer variable
    int **ptr_of_ptr;   //A pointer to pointer. Hence must have two '**' (astericks) before it
    ptr = &x;           // Initialising ptr with the address of x
    ptr_of_ptr = &ptr;  // Initialising the pointer of pointer with the address of ptr.
    cout<<"The address of x is "<<(int)ptr;
    cout<<"\nThe address of ptr is "<<(int)ptr_of_ptr;
    cout<<"\nThe value at the address of ptr is "<<**ptr_of_ptr;

}