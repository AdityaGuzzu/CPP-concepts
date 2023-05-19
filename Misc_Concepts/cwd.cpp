// Program to retrieve the current working directory using C++
#include<iostream>
#include<string>
#include "direct.h"
int main()
{
    char cwd[256];
    _getcwd(cwd,256);
    /*Gets the current working directory*/
    std::cout<<cwd;
    std::string name = "aditya";
    /*Chars are convertible to std::string*/
    std::cout<<std::endl<<cwd+name;

}