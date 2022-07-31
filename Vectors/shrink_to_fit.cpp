/*  We will see the working of the shrink_to_fit() command of vectors 
    ------------------------------------------------------------------
    PARAMETERS: 
    ---> NONE
    ------------------------------------------------------------------
    RETURN VALUE:
    --->NONE
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num_arr(10);
    cout<<"The capacity of num_arr is "<<num_arr.capacity();
    num_arr.resize(5);
    cout<<endl<<"The capacity of num_arr after resize is "<<num_arr.capacity();
    num_arr.shrink_to_fit();
    cout<<endl<<"The capacity of num_arr after shrink_to_fit_ is "<<num_arr.capacity();
}
