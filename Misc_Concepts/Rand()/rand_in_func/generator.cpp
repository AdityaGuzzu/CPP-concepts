/* We will generate a random number in the func and return it to the calling function*/
#include<iostream>
#include<cstdlib>
#include<ctime>
int rand_gen()
{
    srand(time(NULL));
    return (rand() % 5) + 1;
}