/* We will use iterators by passing a vector as an argument to a function */
#include<iostream>
#include<vector>
void read(std::vector<int> nums)
{
    for(std::vector<int>::const_iterator it = nums.begin(); it != nums.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }
}

int main()
{
    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
    read(numbers);
}