/* We will see what happens when we use a preprocessor to deal with long vector commands*/
#include<iostream>
#include<vector>
using namespace std;
#define APPEND push_back
int main()
{
    vector<int> arr = {2,3,4};
    arr.APPEND(5);              //Now APPEND is replaced by push_back
    cout<<arr.back();           
}