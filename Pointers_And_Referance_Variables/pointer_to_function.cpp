/*  In this file, the method of pointing to a function will be shown */
#include<iostream>
using namespace std;
int main()
{
    int add(int,int);       // declaring a function
    int (*ptr) (int,int);   // declaring the pointer to a function which returns int and has two integers as parameters
    ptr = add;              // Assigning add to ptr
    cout<<"Addition of 5 and 6 is "<<(*ptr)(5,6);   //Calling add using ptr
}   

int  add(int a, int b)
{   
    return a+b;
}