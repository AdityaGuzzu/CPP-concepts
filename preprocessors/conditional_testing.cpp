//We will use preprocessors to test the program.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    #ifdef TEST                         //Line 9 will only be compiled if a macro TEST has been previously defined
        cout<<"The value of x is "<<x;
    #endif
    cout<<"\nEnd of program";
}