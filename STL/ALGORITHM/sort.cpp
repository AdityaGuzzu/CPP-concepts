/* A program to use the function std::sort(iterator begin, iterator end)
    of the algorithm module.
     */

#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<int> nums;
    int size;
    std::cout<<"Enter the number of elements";
    std::cin>>size;
    std::cout<<"\nEnter the elements one by one";
    for(int i=0;i<size;i++)
    {
        int num;
        std::cin>>num;
        nums.push_back(num);
    }
    std::cout<<std::endl<<"Before sorting: ";
    for(int i: nums)
    {
        std::cout<<i<<'\t';
    }
    std::cout<<"\n";
    std::sort(nums.begin(),nums.end());
    std::cout<<"After Sorting: ";
    for(int i: nums)
    {
        std::cout<<i<<'\t';
    }

}