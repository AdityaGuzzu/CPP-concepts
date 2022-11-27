/*
    A program to understand clearing the input buffer of iostream in C++
*/

#include<iostream>
#include<limits>
int main()
{
    char word[10];
    bool pass = false;
    std::cout<<"Enter an 8 character long word";
    while(!pass)
    {
        std::cin.getline(word,10);
        if(std::cin.fail())
        {
            
            std::cout<<std::endl<<"Characters exceeded. Try again\n";
            //std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cin.getline(word,10);
        }  
        else
        pass=true; 
    }
}