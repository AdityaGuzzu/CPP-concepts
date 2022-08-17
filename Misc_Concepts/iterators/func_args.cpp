/*  We will use iterators as function arguments */

#include<iostream>
#include<vector>
void read(std::vector<int>::iterator it)    //Takes an iterator as an argument
{
    std::cout<<*it<<std::endl;
}

int main()
{
    std::vector<int> nums = {1,2,3,4,5};
    std::vector<int>::iterator it = nums.begin();
    read(it);
}
