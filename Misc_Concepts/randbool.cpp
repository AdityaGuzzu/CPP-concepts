/* In this file we'll see how to generate random boolean values by generaating random numbers*/

#include<iostream>
#include<cstdlib>
using namespace std;
bool rand_bool()
{
    int decider;
    decider = rand() % 2;   //This generates random numbers. We divide those numbers by 2. If the number is odd, return false. else return true

    if(decider == 0)
    return true;

    else
    return false;
}

int main()
{
    for(int i=0;i<10;i++)
    {
        if(rand_bool())
        {
            cout<<endl<<"An even number generated";
        }
    }
}