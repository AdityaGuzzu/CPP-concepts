/* This file contains the working of break command using a while loop */
#include<iostream>
using namespace std;
int main()
{
    int x=0;
    while(x<5)
    {
        if(x == 3)
        break;              //using break
        cout<<endl<<x;
        x++;
    }
}
