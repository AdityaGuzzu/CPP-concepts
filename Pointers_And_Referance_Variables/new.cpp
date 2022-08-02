/* We will see how to allocate run time memory with new operator */
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size";
    cin>>size;
    int *ptr = new int(size);
    for(int i=0; i<size; i++)
    {
        cout<<endl<<ptr[i];         //it always prints the size variable first idk why.
    }
}