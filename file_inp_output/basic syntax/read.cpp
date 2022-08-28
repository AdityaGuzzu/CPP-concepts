//We will just read the text from the file
#include<iostream>
#include<fstream>
int main()
{
    //Using the constructor of basic_ifstream class
    //Can also use std::fstream and pass std::ios::in as an arg
    std::ifstream Myfile("out.txt");    
	
    // the file passed as an arg MUST exist in the current directory.
    char word[20];
    Myfile>>word;
    std::cout<<word;
}