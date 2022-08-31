/*
    We will use tellp() and tellg() to find what happens when we use the append and input
    modes on the stream
*/
#include<iostream>
#include<sstream>
int main()
{
    std::stringstream buf(std::ios::in | std::ios::app);
    std::cout<<"The position of get when buf is empty is: "<<buf.tellg();
    std::cout<<std::endl<<"The position of put when buf is empty is: "<<buf.tellp();

    //Lets append "Hello" to buf stream
    buf<<"Hello";
    std::cout<<std::endl<<"The position of get when 'hello' is appended is: "<<buf.tellg();
    std::cout<<std::endl<<"The position of put when 'hello' is appended is: "<<buf.tellp();

    //Lets read a char
    char c;
    buf>>c;
    std::cout<<std::endl<<"the position of get when a char is read is: "<<buf.tellg();
    std::cout<<std::endl<<"the position of put when a char is read is: "<<buf.tellp();

}