/* 
    We will see how the numbering of new lines works in C++ 
    We will deal with both seekp() and seekg() 
*/

#include<iostream>
#include<fstream>
int main()
{
    std::fstream InFile("content.txt",std::ios::out | std::ios::in);
    std::cout<<std::endl<<"The position of get in the beginning is: "<<InFile.tellg();
    std::cout<<std::endl<<"The position of put in the beginning is: "<<InFile.tellp();

    //Lets read the first line into a string
    std::string line;
    InFile>>line;
    std::cout<<std::endl<<"the position of get after the first read is: "<<InFile.tellg();
    std::cout<<std::endl<<"the position of put after the first read is: "<<InFile.tellp();

    //Lets read the second line
    InFile>>line;
    std::cout<<std::endl<<"the position of get after second read is: "<<InFile.tellg();
    std::cout<<std::endl<<"the position of put after second read is: "<<InFile.tellp();

    //Now lets write some data
    InFile<<"\nHey reached home";
}