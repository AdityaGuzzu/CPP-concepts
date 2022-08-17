/* We will try to pass an iterator instead of a pointer in a function. */
#include<iostream>
#include<vector>
void read(int *ptr)
{
    std::cout<<std::endl<<*ptr;
}

int main()
{
    std::vector<int> nums = {1};
    std::vector<int>::iterator iter;
    iter = nums.begin();
    read(iter);                         //can't do that
}