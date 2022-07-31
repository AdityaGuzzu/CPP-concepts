/*  The resize member function of the vector class resizes the vector to contain n elements.

    if n is less than the current size of the vector, the vector is reduced to its first n 
    elements.

    if n is greater than the current vector size, required number of elements are added after
    the last element.

    if n is also greater than the vector capacity, the vector is reallocated according to the
    specifications.
    ----------------------------------------------------------------------------
    PARAMETERS:
    ---> new size               (unsigned int)
    ---------------------------------------------------------------------------
    RETURN VALUE:
    ---> NONE
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout<<"\nThe size of nums is "<<nums.size();
    cout<<"\nTHe capacity of nums is "<<nums.capacity();
    nums.resize(4);
    cout<<"\nThe size of nums is "<<nums.size();
    cout<<"\nThe capacity of nums is "<<nums.capacity();
}