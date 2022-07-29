/*  This file contains the way to pass pointers as function arguments.
    Using the classic swap example */
#include<iostream>
using namespace std;
int main()
{   
    void swap(int *, int *);
    int num1 = 5, num2 = 7;
    cout<<endl<<"Before swap: num1 = "<<num1<<"\tnum2 = "<<num2;
    swap(&num1,&num2);    //This is the tricky part. 
    // We need to pass the ADDRESSES of num1 and num2.So we used the ampersand operator
    cout<<endl<<"After swap: num1 = "<<num1<<"\tnum2 = "<<num2;
}

void swap(int *x, int *y)       //Thhe asterick before the variable name represents the pointer
{
    int z;
    z = *x;     //Assigns the value of x to z
    *x = *y;    //Assigns the value of y to x
    *y = z;     //Assigns the value of z to y
}
