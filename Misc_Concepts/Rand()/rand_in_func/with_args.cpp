/* We will return random numbers by taking a stray argument */
#include<iostream>
#include<cstdlib>
#include<ctime>
int rand_num(int x)
{
    srand(time(NULL));
    return (rand() % 6) + 1;

}