/*  We will see how to use the new command */
#include<iostream>
using namespace std;
int main()
{
    int *ptrs[] = {
        new int,            //syntax. new command assigns a pointer to the data type dollowing it
        new int,
        new int
    };                      //semi-colon mandatory

    int arr[3] = {1,2,3};
    for(int i =0; i<3; i++)
    {
        ptrs[i] = &arr[i];          //Assigning the address of the ith element of 'arr' array to the ith element of the 'ptrs' array.
    }

    for(int i=0; i<3; i++)
    {
        cout<<endl<<(int)ptrs[i];           //print the address of ther ith element of the 'arr' array
    }
}