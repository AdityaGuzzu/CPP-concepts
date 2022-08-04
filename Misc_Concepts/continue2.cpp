/* We will see how else to use the continue statement */
#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<5; i++)
    {
        if(i==3)
        {
            continue;           //This works perfectly well.
        }
        else
        std::cout<<std::endl<<i;
    }
}