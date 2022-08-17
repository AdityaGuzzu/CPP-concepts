/*   We will see the working of the insert member function of the vector class
    --------------------------------------------------------------------------------------
     PARAMETERS:
     ---> Too Huge to type. Refer https://cplusplus.com/reference/vector/vector/insert/
     -------------------------------------------------------------------------------------
     RETURN VALUE:
     ---> An iterator to the first element of the inserted elements
*/

#include<iostream>
#include<vector>
int main()
{
    std::vector<int> nums = {1,2,3,4,5};
    int myarray[] = {10,9,8,7,6};
    std::vector<int>::iterator it;
    it = nums.begin();

    it = nums.insert(it,200);            //Inserts 100 at the position 0 and returns the iterator pointing to the first element 

    nums.insert(it,3,100);               //Inserts 3 elements each of value 100 at the beginning of the vector

    nums.insert(it,myarray,myarray+3);   //inserts the first 3 elements of myarray at the beginning of nums

    for(; it<nums.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }
}