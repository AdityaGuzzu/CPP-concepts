/*
    We will try to convert a string to a file name
*/
#include<fstream>
int main()
{
    std::string file_name = "content file";
    std::ofstream OutFile(file_name+".txt",std::ios::out);
    OutFile<<"Hello World!";
}