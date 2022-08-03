/* Another way of dynamically allocationg an array */
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array you want: ";
    cin>>size;
    int *ptr = new int[size];
    for(int i=0; i<size; i++)
    {
        ptr[i] = i;
        cout<<endl<<ptr[i];
    }
}