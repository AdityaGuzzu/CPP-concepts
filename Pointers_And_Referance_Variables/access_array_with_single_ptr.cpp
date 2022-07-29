/*This file contains the way to access all the elements of an array with a single pointer*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5] ={1,2,3,4,5};
    int *ptr = &arr[0];         //This declaration is valid too
    for(int i = 0; i<5; i++)
    {
        cout<<endl<<*(ptr+i);   
        /*This is perfectly valid too. Everytime we increment the value of i, 
        The compiler will increment the address to the next value. 
        (if its an int, next value will be greater by 4. If char, It will be greater by 1) 
        */
    }
}