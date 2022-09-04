/*
    We will read numbers from the content.csv file
*/

#include<iostream>
#include<fstream>
int main()
{
    std::fstream InFile("content.csv",std::ios::in);
    while(InFile.good())
    {
        int x;
        char y;
        InFile>>x;
        InFile>>y;
        std::cout<<x<<'\t'<<y<<std::endl;
    }
}