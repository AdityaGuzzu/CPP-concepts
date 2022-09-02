//We will use the seekp() function to get our file pointer to the desired location in the file

#include<iostream>
#include<fstream>
int main()
{
    std::ofstream OutFile("output.txt");
    OutFile<<"heyyyy! This is the output file";
    OutFile.seekp(100);
    if(OutFile.good())
    {
        OutFile<<"hello";
    }
    else
    {
        std::cout<<"NOT POSSIBLE";
    }
    
}