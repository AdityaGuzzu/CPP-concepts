#include<iostream>
#include<chrono>
#include<vector>

int * insert(int arr[], int pos, int val)
{
    using namespace std::chrono;
    steady_clock::time_point start = steady_clock::now();
    int size = sizeof(arr)/sizeof(int);
    for(int counter = size-1; counter == pos-1; counter--)
    {
        arr[counter+1] = arr[counter];
    }
    arr[pos-1] = val;
    steady_clock::time_point end = steady_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << "Time difference = " << duration_cast<nanoseconds> (end-start).count() << " ns" << std::endl;
    return arr;
}

int main()
{
    using namespace std::chrono;
    steady_clock::time_point start = steady_clock::now();
    int nums[100000];
    for(int i=0; i<99000; i++)
    {
        nums[i] = i;
    }
    insert(nums,1,100);
    // steady_clock::time_point end = steady_clock::now();
    // duration<double> diff = end - start;
    //std::cout<<diff.count()<< "[ms]"<<std::endl;
    // std::cout<<nums[0];
    // std::cout<<std::endl<<nums[1];s
    
}