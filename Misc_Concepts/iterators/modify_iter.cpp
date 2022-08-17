/* We will use iterators to modify vector elements */
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
    for(std::vector<int>::iterator it=numbers.begin(); it != numbers.end(); it++)
    {
        if(*it == 2)
        {
            *it = 3;
            std::cout<<*it<<std::endl;
        }
        else
        {
            std::cout<<*it<<std::endl;
        }
    }
    std::cout<<std::endl<<numbers[1];           //We see that the second element is changed to 3 for good. (because iterators run on pointers)
}