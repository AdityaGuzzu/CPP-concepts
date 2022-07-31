/* We'll see the use of continue command using 'for' loop */

#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        if(i==3)
        continue;                   //using the continue statement
        else
        cout<<endl<<i;
    }
}