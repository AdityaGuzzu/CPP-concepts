/* We'll see how to use the #undef directive to udnefine the macro substitutions made */
#include<iostream>
#define HUNDRED 100
int main()
{
    std::cout<<HUNDRED;     //No error because 100 is replaced by 100
    #undef HUNDRED
    std::cout<<HUNDRED;     //An error because now HUNDRED is now not replaced by 100 
}