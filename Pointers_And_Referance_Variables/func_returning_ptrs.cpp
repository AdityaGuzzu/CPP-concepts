/*This file contains the functions which return pointers */
#include<iostream>
using namespace std;

/*  WE MUST RETURN THE ADDRESSES WHICH POINT TO VARIABLES IN CALLING FUNCTION.
    This is because, if we return the addresses of variables in CALLED function, when the
    control shifts to the CALLING function, the addresses of variables in the  CALLED fucntion
    become inaccessible. Hence this mistake must be avoided
*/
int *greater_(int *x, int *y)  
{
    if(*x > *y)
    {
        return x;           
    }
    else
    {
        return y;
    }
}

int main()
{
    int x=10, y=20;
    int *z;
    z = greater_(&x, &y);       //Either the address of x or y will be assigned.
    cout<<"The greater number is "<<*z;
}