/* We'll nest macros AKA we'll have fun */
#include<iostream>
#define A 100
#define B A+20
int main()
{
    std::cout<<B;   //B is replaced by A + 20 and A is replaced by 100. So we'll see 120.
}