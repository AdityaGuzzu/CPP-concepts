#include<iostream>
#include<chrono>

int main()
{
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for(int x= 0; x<10000000; x++)
    {
        int var = 0;

    }
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    //std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " ns" << std::endl;
    std::chrono::duration<double> diff = end - begin;
    std::cout << "Time difference = " << diff.count() << " ns" << std::endl;
    
}
