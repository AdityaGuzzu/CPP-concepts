#include<iostream>
#include<fstream>
#include<string>
int main()
{
    std::ifstream in("in.txt");
    std::streambuf *inbuf = std::cin.rdbuf();   //saving the old buffer

    std::ofstream out("out.txt");
    std::streambuf *outbuf = std::cout.rdbuf();  //saving the old buffer

    std::cin.rdbuf(in.rdbuf());
    std::cout.rdbuf(out.rdbuf());
   
    std::string word;
    std::cin>>word;    
    std::cout<<word;
}