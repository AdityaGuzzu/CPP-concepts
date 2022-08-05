/* We will generate a random number in the func and return it to the calling function*/
#include<iostream>
#include<cstdlib>
int rand_gen(unsigned int x)
{
    srand(x);
    return (rand() % 5) + 1;
}