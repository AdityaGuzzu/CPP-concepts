/* We will see the use of end member function of the vector class */
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> nums = {1,2,3,4,5};
    std::cout<<std::endl<<*nums.end()-1;  

    /* This prints a garbage value beccause nums.end() returns an iterator pointing to the
        element after the last element of the container which basically isn't assigned to anything
    */

}