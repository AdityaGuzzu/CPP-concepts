/* Using square brackets [] isntead of round brackets () */
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size";
    cin>>size;
    int *ptr = new int[size];
    for(int i=0;i<size;i++)
    {
        cout<<endl<<(int)ptr[i];         //The issue of size variable being printed is solved.
    }
}