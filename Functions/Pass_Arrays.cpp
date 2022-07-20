/*A program to pass arrays to a functions */
#include<iostream>
using namespace std;
int sum(int arr[])                              //A function which returns the sum of elements of an array
{
    int sum=0;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)  
    {
        sum+= arr[i];
    }
   return sum; 
}

int sum(int arr[]);

int main()
{
    int arr[] = {1,3,4,5};
    cout<<"Sum of elements ="<<sum(arr);
}