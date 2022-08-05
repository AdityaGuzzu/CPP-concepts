#include<iostream>
#include<random>
#include<chrono>
int random_num(int x)
{
    using namespace std::chrono;

    //Initialise the seed value using the system clock from the chrono header.
    unsigned seed = system_clock::now().time_since_epoch().count();

    //We are using the merienne twister mt19937 engine 
    std::mt19937 generator (seed);

    //We are goung ton generate a random number between 1 and 6
    return (generator() % 6) + 1; 
}