#include<fstream>
#include<iostream>
int main()
{
    std::fstream InFile("count.txt",std::ios_base::in);
    int visits;
    InFile>>visits;
    visits++;
    std::fstream OutFile("count.txt",std::ios_base::out);
    OutFile<<visits;
    InFile.close();
    OutFile.close();
}