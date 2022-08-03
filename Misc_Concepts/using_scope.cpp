/*  In this file, we will use the {} to create our own scope to create variables we don't
    need throughout the program.
    This is to see how we can use the technique in game.cpp of the Business Simualtion 
    project
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    {
        int x;
        cout<<"enter x :";
        cin>>x;
        arr[0] = x;
    }
    //X can't be accessed here because its out of the scope.
    {
        int x;
        cout<<"\nEnter x: ";
        cin>>x;
        arr[1] = x;
    }
    cout<<"\nThe elements of arr are : "<<arr[0]<<"\t"<<arr[1];

}