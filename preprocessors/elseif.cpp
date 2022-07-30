/*  We'll see the use of #ifdef, #else, #endif */
#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cin>>name;
    cin>>age;
    #ifdef TEST             //Line 11 will be compiled if TEST macro has been previously defined
        cout<<endl<<"In testing phase";     //Once run by adding #define TEST at the beginning of the program
    #else                   //If TEST macro wasn't previously defined, line 13 will be compiled
        cout<<"\nThe name is "<<name<<" Age is "<<age;
    #endif
}