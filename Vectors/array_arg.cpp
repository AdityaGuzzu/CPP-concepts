/* We will see if a vector can be passed instead of an array as an argument to a function*/
#include<iostream>
#include<vector>
using namespace std;
void read(int arr[5])
{
    for(int i=0;i<5;i++)
    {
        cout<<endl<<arr[i];
    }
}

int main()
{
    vector<int> list = {1,2,3,4,5};
    read(list);                         //We cannot pass a vector as an argument for a
                                        // function which needs an array as a parameter
}