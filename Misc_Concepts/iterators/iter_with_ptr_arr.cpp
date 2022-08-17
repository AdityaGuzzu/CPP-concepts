/*  We will see how to use an iterator while accessing elements of a vector which contains
    pointers 
*/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int *> num_ptrs;
    std::vector<int> nums = {1,2,3,4,5};
    for(int i=0; i<nums.size(); i++)
    {   
        num_ptrs.push_back(&nums[i]);
    }

    //Now lets use iterators to iterate over num_ptrs and access its elements
    for(std::vector<int *>::iterator it = num_ptrs.begin(); it != num_ptrs.end(); it++)
    {
        std::cout<<**it<<std::endl;     //We should see 1 2 3 4 5 in vertical order
    }
}