/*  We will see how the range based for loop works in C++ */
#include<iostream>
int main()
{
    int arr[5] = {1,2,3,4,5};
    for(int elem: arr)                      //Syntax. Here elem is iterated over arr.
    {
        std::cout<<elem<<std::endl;
    }
}