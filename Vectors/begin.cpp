/* The begin member function of the vector class returns the iterator pointing to the first element of the
    container.
    ------------------------------------------------------------------------------------------
    PARAMETERS:
    ---> NONE
    -------------------------------------------------------------------------------------------
    RETURN VALUE
    ---> An iterator to the first element of the container
*/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> nums = {1,2,3,4,5};

    //printig the first element
    std::cout<<*nums.begin();

    //using begin() as an iterator inside a vector and erasing the third element
    nums.erase(nums.begin() + 2);

    //lets print the third element now
    std::cout<<std::endl<<nums[2];
}