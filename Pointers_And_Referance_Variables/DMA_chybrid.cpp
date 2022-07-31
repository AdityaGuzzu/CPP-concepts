/* We will try to use 'new' keyword in a hybrid way */
#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int *ptrs[5] =
    {
        new int,
        new int,
        new int,
        new int,        // These are the new pointer variables of type int
        &num            // This is the address of num
    };

    cout<<"\nPrinting the values: ";
    for(int i=0; i<5; i++)
    {
        cout<<endl<<*ptrs[i];       //We will print the value at these addresses
    }
}