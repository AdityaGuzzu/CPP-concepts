/*A new method in CPP to generate random values.
Will test it by calling the function multiple times to check
randomness*/

#include<iostream>
#include<random>

int main()
{
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1,6);
    for(int counter=0; counter<10; counter++)
    {
        
        std::cout<<std::endl<<dist(rd);
    }
    //working appearently
}