/* A program to demonstrate iterators using vectors in C++ */
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> numbers = {1,2,3,4,5};
    
    //iterators run based on pointers
    for(std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }
}