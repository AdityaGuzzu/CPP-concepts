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
    std::cout<<*nums.begin();
}