#include "generator.cpp"
#include<ctime>
int main()
{
    std::cout<<std::endl<<rand_gen();
    std::cout<<std::endl<<rand_gen();
    //We always get both the numbers to be the same. This is probably because microsoft
    // discontinued support for the time function.
}