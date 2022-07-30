/*  We'll see what happens when a function is declared after main and another is defined before 
    main.
*/

#include<iostream>
using namespace std;
void add(int x, int y)
{
    cout<<x<<" + "<<y<<" = "<<x+y;
}




int main()
{
    add(2,3);
    mul(5,10);  //This will be an error because mul was defined after main
                //cut the mul function and paste it before main. It will work.
}

void mul(int x, int y)
{
    cout<<"\n"<<x<<"*"<<y<<" = "<<x*y;
}
