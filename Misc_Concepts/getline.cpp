//We will see the use of getline()
#include<iostream>
int main()
{
    std::string name;
    std::string name2;
    std::getline(std::cin,name);
    std::cin>>name2;
    std::cout<<name;
    std::cout<<std::endl<<name2;
}