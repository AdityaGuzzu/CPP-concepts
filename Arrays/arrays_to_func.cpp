/*  In this file, we'll see if we can pass a row of a multi dimensional array as a parameter
    to a function taking a single dimensional array as an argument
*/

#include<iostream>
using namespace std;
void printinfo(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<endl<<arr[i];
    }
}

int main()
{
    int two_dim[3][3] = {1,2,3,4,5,6,7,8,9};
    printinfo(two_dim[0]);      //We can't send the rows alone. 
}