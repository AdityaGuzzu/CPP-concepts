/*
    The stringstream objects create an internal string buffer.
*/
#include<fstream>
#include<iostream>
#include<sstream>
int main()
{
    //Both output and input can be done
    std::stringstream buf(std::ios::out | std::ios::in);
    //Input "Hello" into the stream object 'buf'
    buf<<"Hello";
    std::cout<<"The position of get is: "<<buf.tellg();
    std::cout<<std::endl<<"The position of put is: "<<buf.tellp();

    char c = 'x';
    buf>>c;
    std::cout<<std::endl<<"The position of get after reading a char is: "<<buf.tellg();
    std::cout<<std::endl<<"The position of put after reading a char is: "<<buf.tellp();

    buf<<c;

    std::cout<<std::endl<<"The position of get after inserting a char is: "<<buf.tellg();
    std::cout<<std::endl<<"The position of put after inserting a char is: "<<buf.tellp();
}