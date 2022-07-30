/* We will use a macro as a function name */
#include<iostream>
#define A add
using namespace std;
void add(int x, int y)
{
    cout<<endl<<x<<" + "<<y<<" = "<<x+y;
}

int main()
{
    A(10,20);   //A will be replaced by add
}