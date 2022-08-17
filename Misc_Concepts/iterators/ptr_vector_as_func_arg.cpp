/*  We will pass a vector containing pointers as an argument to a function and use iterators
    inside that 
*/

#include<iostream>
#include<vector>
void read(std::vector<int *> _ptr_vec)
{
    for(std::vector<int *>::iterator it = _ptr_vec.begin(); it != _ptr_vec.end(); it++)
    {
        std::cout<<**it<<std::endl;
    }
}

int main()
{
    std::vector<int *> _ptr_vec;
    int arr[] = {1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        _ptr_vec.push_back(&arr[i]);
    }
    read(_ptr_vec);
}