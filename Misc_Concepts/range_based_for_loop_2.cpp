/* NOTE: We cant use range based for loops for arrays passed to functions :'( 
    We will use range based for loop with character arrays (strings)
*/
#include<iostream>
int main()
{
    for(char ch: "Aditya")      //We always dont need to iterate over variables. It can be anything that has a range.
    {
        std::cout<<ch<<std::endl;
    }
}