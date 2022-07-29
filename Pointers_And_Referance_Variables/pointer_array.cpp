/* In this file, we'll see how to create an array of pointers and use them */
#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};   //An integer array of size 5
    int *ptr_arr[5];            //A pointer array
    for(int i=0;i<5;i++)
    {
        ptr_arr[i] = &arr[i];   //This assigns the address of ith element of arr to the ith element of ptr_arr
    }
    cout<<"The address of 2nd element is: "<<(int)ptr_arr[1];
    cout<<"\nThe address of 3rd element is: "<<(int)ptr_arr[2];
    
}